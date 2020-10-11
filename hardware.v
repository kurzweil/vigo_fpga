/*
* Hardware wiring module
* This integration module wires all the system module
*/
module system (
    input CLK,
    input PIN_2,
    output PIN_3,
    input PIN_4,
    input PIN_5,
    output PIN_24,
    input PIN_23,
    input PIN_22,
    input PIN_21,
    input PIN_20,
    input PIN_19,
    input PIN_13,
    input PIN_12,
    input PIN_11,
    input PIN_10,
    input PIN_9,
    input PIN_8,
    input PIN_7,
    input PIN_6
);

wire clk_48mhz;
Clock48mhz clk0 (.clk_in(CLK), .clk_out(clk_48mhz));

wire [4:0] lh_sensor;
assign lh_sensor = {{PIN_23, PIN_22, PIN_21, PIN_20, PIN_19}};

wire [7:0] wheel_sensor;
assign wheel_sensor = {{PIN_13, PIN_12, PIN_11, PIN_10, PIN_9, PIN_8, PIN_7, PIN_6}};

System #(5) system (
    .CLK(CLK), //Hardware clock
    .TICK_CLK(clk_48mhz), //Reduced integration clock
    .LH_SENSOR(lh_sensor), // Lighthouse Sensors
    .WHEEL_SENSOR(wheel_sensor), // Quadrature Encoders
    .SSEL(PIN_5), //SPI Select
    .SCLK(PIN_2), //SPI Clock
    .MISO(PIN_3), //SPI MISO
    .MOSI(PIN_4), //SPI MOSI
    .SERVO(PIN_24)); // PWM generator

endmodule
