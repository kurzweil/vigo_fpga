/*
* LightHouse OOTX decode module
* Verilog implementation of the OOTX Framing protocol
* https://github.com/nairol/LighthouseRedox/blob/master/docs/Light%20Emissions.md
*/
module LightHouseOotx (
    input CLK,
    input DCLK,
    input DATA_IN,
    output[15:0] DATA_OUT,
    output[7:0] ADDRESS,
    output READY
);

reg[15:0] DATA_OUT;
wire[7:0] ADDRESS;
reg READY;

wire[15:0] packet;
wire sync_bit;
reg[16:0] frame;

assign packet = {frame[8:1],frame[16:9]};
assign sync_bit = frame[0];

reg [5:0] capture_count = 0;
reg [7:0] byte_count = 0;
reg capture_enabled = 0;
reg [1:0] DLCKr;
always @(posedge CLK) DLCKr <= {DLCKr[0], DCLK};
wire DCLK_risingedge = (DLCKr[1:0]==2'b01);
wire DCLK_fallingedge = (DLCKr[1:0]==2'b10);

assign ADDRESS = byte_count < 2 ? 0 : byte_count-2;

always @(posedge CLK) begin
    READY = 0;
    if (DCLK_risingedge) begin
        frame = {frame[15:0], DATA_IN};
        if (capture_enabled == 0 && packet == 0 && sync_bit == 1) begin
            capture_count = 0;
            byte_count = 0;
            capture_enabled = 1;
        end
        else if (capture_enabled == 1) begin
            if (capture_count == 16) begin
                if (sync_bit == 1) begin
                    READY = 1;
                    DATA_OUT = packet; 
                    byte_count = byte_count + 2;
                end
                else begin
                    capture_enabled = 0;
                end
                capture_count = 0;
            end
            else begin
                capture_count++;
            end
        end
    end
end

endmodule
