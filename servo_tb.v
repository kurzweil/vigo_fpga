`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 10 ns
module servo_tb();

reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

wire pwm;
reg [9:0]value;

Servo servo0 (.CLK(clk_16mhz), .PWM(pwm), .VALUE(value));

initial begin
  $dumpfile(`DUMPSTR(`VCD_OUTPUT));
  $dumpvars(0, servo_tb);

  value = 0;
  #5000
  value = 10'h1FF;
  #25000
  value = 10'h3FF;
  #50000

  $display("End of simulation");
  $finish;
end

endmodule
