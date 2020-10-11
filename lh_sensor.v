/*
* LightHouse pulse and sweep decode module
* https://github.com/nairol/LighthouseRedox/blob/master/docs/Light%20Emissions.md
*/
module LightHouseSensor (
    input CLK,
    input TICK_CLK,
    input SENSOR,
    output[31:0] DATA,
    output[1:0] ADDRESS,
    output READY,
    output SYNC,
    output LH0_DATA,
    output LH0_READY,
    output LH1_DATA,
    output LH1_READY
);

reg READY;
reg LH0_DATA;
reg LH0_READY = 0;
reg LH1_DATA;
reg LH1_READY = 0;

reg [2:0] state;
parameter S0=3'b001;
parameter S1=3'b010;
parameter S2=3'b100;
parameter PULSE_DATA=4'b0010;
parameter PULSE_VALID=4'b1000;
parameter PULSE_INVALID_MAX=4'b0111;
parameter PULSE_INVALID_MIN=4'b0101;
parameter PULSE_J0_MIN=3000;
parameter PULSE_J0=4'b1000;     //Valid, Data 0, Axis 0, 3000 ticks, 62.5us
parameter PULSE_K0_MIN=3500;
parameter PULSE_K0=4'b1001;     //Valid, Data 0, Axis 1, 3500 ticks, 72.9us
parameter PULSE_J1_MIN=4000;
parameter PULSE_J1=4'b1010;     //Valid, Data 1, Axis 0, 4000 ticks, 83.3us
parameter PULSE_K1_MIN=4500;
parameter PULSE_K1=4'b1011;     //Valid, Data 1, Axis 1, 4500 ticks, 93.8us
parameter PULSE_J2_MIN=5000;
parameter PULSE_J2=4'b1100;     //Valid, Skip, Data 0, Axis 0, 5000 ticks, 104us
parameter PULSE_K2_MIN=5500;
parameter PULSE_K2=4'b1101;     //Valid, Skip, Data 0, Axis 1, 5500 ticks, 115us
parameter PULSE_J3_MIN=6000;
parameter PULSE_J3=4'b1110;     //Valid, Skip, Data 1, Axis 0, 6000 ticks, 125us
parameter PULSE_K3_MIN=6500;
parameter PULSE_K3=4'b1111;     //Valid, Skip, Data 1, Axis 1, 6500 ticks, 135us
parameter PULSE_MAX=7000;
parameter MAX_WINDOW=350000;

function [3:0] determine_pulse_type;
    input [31:0] pulse_width;
    begin
        if (pulse_width > PULSE_MAX) begin
            determine_pulse_type = PULSE_INVALID_MAX;
        end
        else if (pulse_width > PULSE_K3_MIN) begin
            determine_pulse_type = PULSE_K3;
        end
        else if (pulse_width > PULSE_J3_MIN) begin
            determine_pulse_type = PULSE_J3;
        end
        else if (pulse_width > PULSE_K2_MIN) begin
            determine_pulse_type = PULSE_K2;
        end
        else if (pulse_width > PULSE_J2_MIN) begin
            determine_pulse_type = PULSE_J2;
        end
        else if (pulse_width > PULSE_K1_MIN) begin
            determine_pulse_type = PULSE_K1;
        end
        else if (pulse_width > PULSE_J1_MIN) begin
            determine_pulse_type = PULSE_J1;
        end
        else if (pulse_width > PULSE_K0_MIN) begin
            determine_pulse_type = PULSE_K0;
        end
        else if (pulse_width > PULSE_J0_MIN) begin
            determine_pulse_type = PULSE_J0;
        end
        else
            determine_pulse_type = PULSE_INVALID_MIN;
    end
endfunction

reg [1:0] RECVr;
always @(negedge CLK) RECVr <= {RECVr[0], SENSOR};
wire RECV_risingedge = (RECVr[1:0]==2'b01);
wire RECV_fallingedge = (RECVr[1:0]==2'b10);
reg SYNC;

reg [31:0] counter;
reg [31:0] b_ticks;
reg [31:0] c_ticks;
reg [3:0] pulse_type;
reg [1:0] axis;

reg [1:0] ADDRESS;
reg [31:0] ticks;
assign DATA = ticks;
reg counter_reset = 0;
initial begin
    counter = 0;
    state = S0;
end

always @ (posedge TICK_CLK) begin
    if (counter_reset) begin
        counter = 0;
    end
    else begin
        counter = counter + 1;
    end
end

always @ (posedge CLK) begin
    counter_reset = 0;
    READY = 0;
    if (counter > MAX_WINDOW) begin
        SYNC = 0;
        LH0_READY = 0;
        LH1_READY = 0;
        state = S0;
        counter_reset = 1;
    end
    else begin
        if (RECV_fallingedge) begin
            if (state == S0) begin
                counter_reset = 1;
                b_ticks = 0;
                c_ticks = 0;
            end
            else if (state == S1) begin
                SYNC = 0;
                b_ticks = counter;
            end
            else if (state == S2) begin
                if (c_ticks == 0) 
                    if (axis == 2 || axis == 3)
                        c_ticks = (counter-b_ticks);
                    else
                        c_ticks = counter;
            end
        end
        else if (RECV_risingedge) begin
            if (state == S0) begin
                pulse_type = determine_pulse_type(counter);
                if (|(pulse_type & PULSE_VALID)) begin
                    LH0_DATA = |(pulse_type & PULSE_DATA);
                    LH0_READY = 1;
                    if (!(|(pulse_type & 4'b0100))) begin
                        if(|(pulse_type & 4'b0001))
                            axis = 1;
                        else
                            axis = 0;
                    end
                    state = S1;
                end
                else begin
                    state = S0;
                    counter_reset = 1;
                end
            end
            else if (state == S1) begin
                pulse_type = determine_pulse_type(counter-b_ticks);
                if (|(pulse_type & PULSE_VALID)) begin
                    LH1_DATA = |(pulse_type & PULSE_DATA);
                    LH1_READY = 1;
                    if (!(|(pulse_type & 4'b0100))) begin
                        if(|(pulse_type & 4'b0001))
                            axis = 3;
                        else
                            axis = 2;
                    end
                    state = S2;
                end
                else begin
                    state = S0;
                    counter_reset = 1;
                end
            end
            else if (state == S2) begin
                ADDRESS = axis;
                ticks = c_ticks + ((counter-c_ticks) >> 1);
                READY = 1;
                if (axis == 3)
                    SYNC = 1;
                state = S0;
                counter_reset = 1;
                LH0_READY = 0;
                LH1_READY = 0;
                LH0_DATA = 0;
                LH1_DATA = 0;
            end
        end
    end
end

endmodule
