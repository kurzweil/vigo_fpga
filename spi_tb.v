`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 1 ps
module spi_tb();

reg clk = 0;
always #0.1 clk = ~clk;

parameter NUM_REGISTERS = 32;
parameter ADDRESS_WIDTH = $clog2(NUM_REGISTERS);

wire spi_start;
wire[ADDRESS_WIDTH-1:0] spi_address;
wire[7:0] spi_read_data;
wire[7:0] spi_write_data;
reg[7:0] mem_data[NUM_REGISTERS-1:0];
reg ssel = 1;
reg sclk = 0;
wire miso;
wire spi_wren;
reg mosi = 0;

SpiInterface #(8, ADDRESS_WIDTH) spi0 (.CLK(clk),
    .SSEL(ssel),
    .SCLK(sclk),
    .MISO(miso),
    .MOSI(mosi),
    .ADDRESS(spi_address),
    .READ_DATA(spi_read_data),
    .WRITE_DATA(spi_write_data),
    .WREN(spi_wren),
    .START(spi_start));

integer i;

assign spi_read_data = mem_data[spi_address];

`SPI_TRANSFER_TASK(spi_transfer, mosi, miso, sclk, 8)

reg [7:0]value = 0;
always @(negedge clk) begin
    if (spi_wren) begin
        mem_data[spi_address] = spi_write_data;
    end
end

initial begin
    $dumpfile(`DUMPSTR(`VCD_OUTPUT));
    $dumpvars(0, spi_tb);
    for (i=0; i<NUM_REGISTERS; i++) begin
        mem_data[i] <= (i+1);
    end
    #1

    //Test simple read operation
    ssel = 0;
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h01);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h02);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h03);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h04);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h05);
    ssel = 1;
    #1

    //Test read operation with address
    ssel = 0;
    spi_transfer(8'h04, value);
    `EXPECT(value, 8'h01);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h05);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'h06);
    ssel = 1;
    #1

    //Test write operation
    ssel = 0;
    spi_transfer(8'h88, value);
    `EXPECT(value, 8'h01);
    spi_transfer(8'hFA, value);
    `EXPECT(value, 8'hzz);
    spi_transfer(8'hCE, value);
    `EXPECT(value, 8'hzz);
    ssel = 1;
    #1
    ssel = 0;
    spi_transfer(8'h08, value);
    `EXPECT(value, 8'h01);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'hFA);
    spi_transfer(8'h00, value);
    `EXPECT(value, 8'hCE);
    ssel = 1;

    $display("End of simulation");
    $finish;
end

endmodule
