/*
* Dual Port Ram Module
* Parameterized address and data widths
* Defaults to 512x8
*/
module DualPortRam (DIN, WRITE_EN, WADDR, WCLK, RADDR, RCLK, DOUT);
    parameter addr_width = 9;
    parameter data_width = 8;
    input [addr_width-1:0] WADDR, RADDR;
    input [data_width-1:0] DIN;
    input WRITE_EN, WCLK, RCLK;
    output reg [data_width-1:0] DOUT;
    reg [data_width-1:0] mem [(1<<addr_width)-1:0] ;
    always @(posedge WCLK) // Write memory.
    begin
        if (WRITE_EN)
            mem[WADDR] <= DIN; // Using write address bus.
    end
    always @(posedge RCLK) // Read memory.
    begin
        DOUT <= mem[RADDR]; // Using read address bus.
    end
 endmodule
