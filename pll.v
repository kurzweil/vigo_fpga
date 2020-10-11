/*
* 48mhz using ICE40 intrinsics
*/
module Clock48mhz (
    input clk_in,
    output clk_out
);

SB_PLL40_CORE #(
    .DIVR(4'b0000),
    .DIVF(7'b0101111),
    .DIVQ(3'b100),
    .FILTER_RANGE(3'b001),
    .FEEDBACK_PATH("SIMPLE"),
    .DELAY_ADJUSTMENT_MODE_FEEDBACK("FIXED"),
    .FDA_FEEDBACK(4'b0000),
    .DELAY_ADJUSTMENT_MODE_RELATIVE("FIXED"),
    .FDA_RELATIVE(4'b0000),
    .SHIFTREG_DIV_MODE(2'b00),
    .PLLOUT_SELECT("GENCLK"),
    .ENABLE_ICEGATE(1'b0)
) pll (
	.REFERENCECLK(clk_in),
    .PLLOUTCORE(clk_out),
    .PLLOUTGLOBAL(),
    .EXTFEEDBACK(),
    .DYNAMICDELAY(),
    .RESETB(1'b1),
    .BYPASS(1'b0),
    .LATCHINPUTVALUE(),
    .LOCK(),
    .SDI(),
    .SDO(),
    .SCLK()
);

endmodule
