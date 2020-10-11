/*
* EdgeTrigger module
* This module breaks signal transitions into their component parts
*/
module EdgeTrigger (
    input wire CLK,
    input wire IN,
    output wire RISING_EDGE,
    output wire FALLING_EDGE,
    output wire ACTIVE
);
    parameter ACTIVE_LOW = 0;
    reg [1:0] TRIGGERr;
    assign ACTIVE = ACTIVE_LOW ? ~IN : IN;
    always @(negedge CLK) TRIGGERr <= {TRIGGERr[0], ACTIVE};
    assign RISING_EDGE = (TRIGGERr[1:0]==2'b01);
    assign FALLING_EDGE = (TRIGGERr[1:0]==2'b10);
endmodule
