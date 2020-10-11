module SpiInterface (
    input CLK,
    input SSEL,
    input SCLK,
    output MISO,
    input MOSI,
    output START,
    output WREN,
    input [WIDTH-1:0]READ_DATA,
    output [WIDTH-1:0]WRITE_DATA,
    output [DEPTH-1:0]ADDRESS
);

parameter WIDTH = 8;
parameter DEPTH = 1;

reg [DEPTH-1:0] ADDRESS;
reg [WIDTH-1:0] WRITE_DATA;
reg WREN;
reg write_enabled;

wire SCLK_risingedge;
wire SCLK_fallingedge;
wire SSEL_startmessage;
wire SSEL_endmessage;
wire SSEL_active;
EdgeTrigger trigger0 (.CLK(CLK), .IN(SCLK), .RISING_EDGE(SCLK_risingedge), .FALLING_EDGE(SCLK_fallingedge), .ACTIVE());
EdgeTrigger #(.ACTIVE_LOW(1)) trigger1 (.CLK(CLK), .IN(SSEL), .RISING_EDGE(SSEL_startmessage), .FALLING_EDGE(SSEL_endmessage), .ACTIVE(SSEL_active));

reg [WIDTH-1:0] byte_data_received;
reg [4:0] bit_index;
reg [8:0] byte_count;

assign MISO = (SSEL_active && ~write_enabled) ? READ_DATA[(WIDTH-1)-bit_index] : 1'bz;
assign START = SSEL_startmessage;

always @(posedge CLK) begin
    WREN = 0;
    if(SSEL_startmessage) begin
        ADDRESS = 0;
        write_enabled = 0;
        bit_index = 0;
        byte_count = 0;
    end
    else if(SCLK_risingedge) begin
        byte_data_received = {byte_data_received[WIDTH-2:0], MOSI};
    end
    else if(SCLK_fallingedge) begin
        if (bit_index == WIDTH-1) begin
            if (byte_count == 0) begin
                if (byte_data_received[7]) begin
                    write_enabled = 1;
                    //TODO subtracting 1 to start from received address, but this may be buggy if you try to write to address zero, maybe not, needs testing
                    ADDRESS = ADDRESS + (byte_data_received & 8'b01111111) - 1;
                end
                else if (byte_data_received != 0) begin
                    ADDRESS = ADDRESS + byte_data_received;
                end
                else begin
                    ADDRESS = ADDRESS + 1;
                end
            end
            else if (ADDRESS != {DEPTH{1'b1}}) begin
                ADDRESS = ADDRESS + 1;
            end
            bit_index = 0;
            byte_count = byte_count + 1;
            if (byte_count > 1 && write_enabled) begin
                WRITE_DATA = byte_data_received;
                WREN = 1;
            end
        end
        else begin
            bit_index = bit_index + 1;
        end
    end
end

endmodule
