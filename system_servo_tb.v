`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 10 ns
module system_servo_tb();

parameter NUM_LH_SENSORS = 3;
reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

reg [NUM_LH_SENSORS-1:0]lh_sensor = {NUM_LH_SENSORS{1'b1}};
reg ssel = 1;
reg sclk = 0;
wire miso;
reg mosi = 0;
wire servo;

System #(3) system (.CLK(clk_16mhz), .TICK_CLK(clk_48mhz), .LH_SENSOR(lh_sensor), .SSEL(ssel), .SCLK(sclk), .MISO(miso), .MOSI(mosi), .SERVO(servo));
`SPI_TRANSFER_TASK(spi_transfer_8, mosi, miso, sclk, 8)
reg [8:0]value = 0;

integer i;
initial begin
    $dumpfile(`DUMPSTR(`VCD_OUTPUT));
    $dumpvars(0, system);

    #1
    ssel = 0;
    spi_transfer_8(8'h94, value);
    spi_transfer_8(8'h01, value);
    spi_transfer_8(8'hFF, value);
    ssel = 1;
    #1

    #20000

    $display("End of simulation");
    $finish;
end

endmodule
