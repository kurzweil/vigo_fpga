`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 10 ns
module system_ootx_tb();

parameter NUM_LH_SENSORS = 3;
reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

/*
always #0.03125 begin
    clk_16mhz = ~clk_16mhz;
    system.lh_sensor_instance[0].lh_sensor.counter = system.lh_sensor_instance[0].lh_sensor.counter_reset ? 0 : system.lh_sensor_instance[0].lh_sensor.counter + 3;
    system.lh_sensor_instance[1].lh_sensor.counter = system.lh_sensor_instance[1].lh_sensor.counter_reset ? 0 : system.lh_sensor_instance[1].lh_sensor.counter + 3;
    system.lh_sensor_instance[2].lh_sensor.counter = system.lh_sensor_instance[2].lh_sensor.counter_reset ? 0 : system.lh_sensor_instance[2].lh_sensor.counter + 3;
end
*/

reg [NUM_LH_SENSORS-1:0]lh_sensor = {NUM_LH_SENSORS{1'b1}};
reg ssel = 1;
reg sclk = 0;
wire miso;
reg mosi = 0;

System #(3) system (.CLK(clk_16mhz), .TICK_CLK(clk_48mhz), .LH_SENSOR(lh_sensor), .SSEL(ssel), .SCLK(sclk), .MISO(miso), .MOSI(mosi));

integer i;
initial begin
  $dumpfile(`DUMPSTR(`VCD_OUTPUT));
  $dumpvars(0, system);

  #0.1

  `include "sweep.inc"

  ssel = 1;
  mosi = 1;
  sclk = 0;
  #1
  ssel = 0;
  #1
  for (i=0; i<NUM_LH_SENSORS*4*64; i++) begin
    sclk = ~sclk;
    #1;
  end
  #3
  ssel = 1;
  #1
  $display("End of simulation");
  $finish;
end

endmodule
