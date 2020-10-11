/*
* Debounce Module
* Samples the input pin for a fixed period before setting the ouput
*/
module debounce(
    input CLK,
    input IN,
    output OUT
);

reg OUT;
reg [15:0] history; //TODO: this is a fixed but could be parameterized later
always @(posedge CLK)
begin
    history <= {history[14:0], IN};
    if (history == {16{1'b1}})
        OUT = 1;
    else if (history == 0)
        OUT = 0;
end

endmodule

