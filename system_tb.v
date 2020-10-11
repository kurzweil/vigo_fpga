`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 10 ns
module system_tb();

parameter NUM_LH_SENSORS = 5;
parameter NUM_WHEEL_SENSORS = 4;
reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

reg [NUM_WHEEL_SENSORS-1:0]wheel_sensor = 0;
reg [NUM_LH_SENSORS-1:0]lh_sensor = {NUM_LH_SENSORS{1'b1}};
reg ssel = 1;
reg sclk = 0;
wire miso;
reg mosi = 0;

System system (.CLK(clk_16mhz), .TICK_CLK(clk_48mhz), .LH_SENSOR(lh_sensor), .SSEL(ssel), .SCLK(sclk), .MISO(miso), .MOSI(mosi));
`SPI_TRANSFER_TASK(spi_transfer_32, mosi, miso, sclk, 32)
reg [31:0]value = 0;

integer i;
initial begin
  $dumpfile(`DUMPSTR(`VCD_OUTPUT));
  $dumpvars(0, system);

  #0.1

  $display("Sweep 0"); 
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #85
  lh_sensor = 5'b01010;
  #1
  lh_sensor = 5'b01110;
  #1
  lh_sensor = 5'b11110;
  #1
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #330
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #110
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3829
  lh_sensor = 5'b01111;
  #10.1
  lh_sensor = 5'b00111;
  #10.2
  lh_sensor = 5'b01011;
  #10.5
  lh_sensor = 5'b11001;
  #10.7
  lh_sensor = 5'b11100;
  #10.4
  //lh_sensor = 1'b0;
  //#10
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3987.8

  $display("Sweep 1"); 
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #80
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #320
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #110
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3629
  lh_sensor = 5'b01111;
  #10
  lh_sensor = 5'b10111;
  #10
  lh_sensor = 5'b11011;
  #10
  lh_sensor = 5'b11101;
  #10
  lh_sensor = 5'b11110;
  #10
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3987.8

  $display("Sweep 2"); 
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #110
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #290
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #70
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3829
  lh_sensor = 5'b01111;
  #10
  lh_sensor = 5'b10111;
  #10
  lh_sensor = 5'b11011;
  #10
  lh_sensor = 5'b11101;
  #10
  lh_sensor = 5'b11110;
  #10
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3987.8

  $display("Sweep 3"); 
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #110
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #290
  lh_sensor = {NUM_LH_SENSORS{1'b0}};
  #95
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3729
  lh_sensor = 5'b01111;
  #10
  lh_sensor = 5'b10111;
  #10
  lh_sensor = 5'b11011;
  #10
  lh_sensor = 5'b11101;
  #10
  lh_sensor = 5'b11110;
  #10
  lh_sensor = {NUM_LH_SENSORS{1'b1}};
  #3987.8

  #1
  ssel = 0;
  spi_transfer_32(32'h00, value);
  `EXPECT(value, 32'h165c0300);
  spi_transfer_32(32'h00, value);
  `EXPECT(value, 32'h2d310300);
  spi_transfer_32(32'h00, value);
  `EXPECT(value, 32'h5e290300);
  spi_transfer_32(32'h00, value);
  `EXPECT(value, 32'hb81a0300);
  ssel = 1;
  #1
  $display("End of simulation");
  $finish;
end

endmodule
