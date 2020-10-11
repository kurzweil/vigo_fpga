/*
* 32bit Quadrature Encoder Module
* https://en.wikipedia.org/wiki/Incremental_encoder#Quadrature_outputs
*/
module DebouncedQuadrature(
    input CLK,
    input IN_A,
    input IN_B,
    output [31:0] COUNT
);

wire debounced_quadA;
wire debounced_quadB;
debounce db0(.CLK(CLK), .IN(IN_A), .OUT(debounced_quadA));
debounce db1(.CLK(CLK), .IN(IN_B), .OUT(debounced_quadB));
Quadrature quad0 (.CLK(CLK), .IN_A(debounced_quadA), .IN_B(debounced_quadB), .COUNT(COUNT));

endmodule

module Quadrature(
    input CLK,
    input IN_A,
    input IN_B,
    output [31:0] COUNT
);
reg [31:0] COUNT = 0;
reg quadA_delayed, quadB_delayed;
always @(posedge CLK) quadA_delayed <= IN_A;
always @(posedge CLK) quadB_delayed <= IN_B;

wire count_enable = IN_A ^ quadA_delayed ^ IN_B ^ quadB_delayed;
wire count_direction = IN_A ^ quadB_delayed;

always @(posedge CLK)
begin
    if(count_enable)
    begin
        if(count_direction) COUNT<=COUNT+1; else COUNT<=COUNT-1;
    end
end

endmodule

