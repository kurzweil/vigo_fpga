/*
* Encodes a sequence of bits into their binary digit equivalent
* https://en.wikipedia.org/wiki/Priority_encoder
*/
module PriorityEncoder #(
    parameter IN_WIDTH = 4,
    parameter OUT_WIDTH = $clog2(IN_WIDTH)
) (
    input wire [IN_WIDTH-1:0]IN,
    output reg [OUT_WIDTH-1:0]OUT
);
    integer i;
    always @* begin
        OUT = ~0;
        for (i=IN_WIDTH; i>=0; i=i-1) begin
            if (IN[i]) begin 
                OUT = i;
            end
        end
    end
endmodule
