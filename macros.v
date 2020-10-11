/*
* Various macros
*/

//Simulation helper
`define EXPECT(ACTUAL, EXPECTED) \
  if (ACTUAL !== EXPECTED) $error("Expected 0x%x but was 0x%x", EXPECTED, ACTUAL);

`define SPI_TRANSFER_TASK(TASK_NAME, MOSI, MISO, SCLK, WIDTH) \
task TASK_NAME; \
    input [WIDTH-1:0]in; \
    output [WIDTH-1:0]out; \
    begin \
        for (i=0; i<WIDTH; i++) begin \
            MOSI = in[(WIDTH-1)-i]; \
            SCLK = 0; \
            #1; \
            out = {out[(WIDTH-2):0], MISO}; \
            SCLK = 1; \
            #1; \
        end \
        SCLK = 0; \
        #1; \
    end \
endtask


