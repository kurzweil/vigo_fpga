`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 100 ns / 1 ps
module lh_ootx_tb();

reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

wire data;
reg dclk;

parameter NUM_BITS = 17;
reg[NUM_BITS-1:0] frame;
reg[4:0] frame_index;
wire[15:0] mem_data;
wire[7:0] mem_address;
wire ready;

LightHouseOotx lh_ootx0 (.CLK(clk_16mhz), .DATA_IN(data), .DCLK(dclk), .DATA_OUT(mem_data), .ADDRESS(mem_address), .READY(ready));

task load;
    input [NUM_BITS-1:0]data;
    begin
        frame = data;
        for (frame_index=0; frame_index<NUM_BITS; frame_index++) begin
            dclk = 0;
            #1;
            dclk = 1;
            #1;
        end
    end
endtask

assign data = frame[(NUM_BITS-1)-frame_index];

initial begin
  $dumpfile(`DUMPSTR(`VCD_OUTPUT));
  $dumpvars(0, lh_ootx_tb);

  load({16'hABCD, 1'b0});
  load({16'h0000, 1'b1});
  load({16'h000E, 1'b1});
  load({16'h0123, 1'b1});
  load({16'h4567, 1'b1});
  load({16'h89AB, 1'b1});
  load({16'hCD00, 1'b1});
  #10
  load({16'h0000, 1'b1});
  load({16'h000E, 1'b1});
  load({16'hFEDC, 1'b1});
  load({16'hBA98, 1'b1});
  load({16'h7654, 1'b1});
  load({16'h3210, 1'b1});
  dclk = 0;
  #1;
  dclk = 1;
  #10


  $display("End of simulation");
  $finish;
end

endmodule
