/*
* Servo Module
* PWM generation appropiate for hobby servo
* https://en.wikipedia.org/wiki/Servo_control
*/
module Servo (
    input CLK,
    output PWM,
    input [9:0] VALUE
);

reg PWM = 0;
reg [18:0]counter = 0;

always @(negedge CLK) begin
    if (VALUE == 0) begin
        PWM = 0;
        counter = 0;
    end
    else begin
        if (counter >= 333500 || counter == 0) begin
            PWM = 1;
            counter = 0;
        end
        if (counter == VALUE<<5) begin
            PWM = 0;
        end
        counter = counter + 1;
    end
end

endmodule
