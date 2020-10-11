`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
//`timescale 0.000000020833333 us / 1 ns
`timescale 1 us / 1 ps
module lh_sensor_tb();

parameter DURATION = 8333;

reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

reg sensor;
wire sync;

wire ready;
wire [1:0]address;
wire [31:0]data;
LightHouseSensor lh_sensor0 (.CLK(clk_16mhz), .TICK_CLK(clk_48mhz), .SENSOR(sensor), .DATA(data), .READY(ready), .ADDRESS(address), .SYNC(sync));

initial begin
  $dumpfile(`DUMPSTR(`VCD_OUTPUT));
  $dumpvars(0, lh_sensor_tb);

  sensor = 1'b1;
  #0.1

  $display("Sweep 0"); 
  sensor = 1'b0;
  #85
  sensor = 1'b1;
  #330
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #3829
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 0)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 209223)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 1"); 
  sensor = 1'b0;
  #80
  sensor = 1'b1;
  #320
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #3629
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 1)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 198902)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 2"); 
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #290
  sensor = 1'b0;
  #70
  sensor = 1'b1;
  #3829
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 2)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 196984)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 3"); 
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #290
  sensor = 1'b0;
  #95
  sensor = 1'b1;
  #3729
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 3)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 193384)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 4"); 
  sensor = 1'b0;
  #70
  sensor = 1'b1;
  #330
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #3829
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 0)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 208502)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 5"); 
  sensor = 1'b0;
  #80
  sensor = 1'b1;
  #320
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #3629
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 1)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 198903)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 6"); 
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #290
  sensor = 1'b0;
  #70
  sensor = 1'b1;
  #3829
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 2)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 196984)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("Sweep 7"); 
  sensor = 1'b0;
  #110
  sensor = 1'b1;
  #290
  sensor = 1'b0;
  #75
  sensor = 1'b1;
  #3729
  sensor = 1'b0;
  #10
  sensor = 1'b1;
  #3987.8

  #10
  if (lh_sensor0.ADDRESS != 3)
      $error("Address incorrect: was %d", lh_sensor0.ADDRESS);
  if (lh_sensor0.DATA != 192424)
      $error("Measurement incorrect: was %d", lh_sensor0.DATA);

  $display("End of simulation");
  $finish;
end

endmodule
