`default_nettype none
`define DUMPSTR(x) `"x.vcd`"
`timescale 1 us / 10 ns
module system_wheel_tb();

parameter NUM_WHEEL_SENSORS = 4;
parameter NUM_LH_SENSORS = 3;
reg clk_48mhz = 0;
always #0.010417 clk_48mhz = ~clk_48mhz;
reg clk_16mhz = 0;
always #0.03125 clk_16mhz = ~clk_16mhz;

reg [NUM_WHEEL_SENSORS*2-1:0]wheel_sensor = 0;
reg [NUM_LH_SENSORS-1:0]lh_sensor = {NUM_LH_SENSORS{1'b1}};
reg ssel = 1;
reg sclk = 0;
wire miso;
reg mosi = 0;
wire servo;

System #(3) system (.CLK(clk_16mhz), .TICK_CLK(clk_48mhz), .LH_SENSOR(lh_sensor), .WHEEL_SENSOR(wheel_sensor), .SSEL(ssel), .SCLK(sclk), .MISO(miso), .MOSI(mosi), .SERVO(servo));
`SPI_TRANSFER_TASK(spi_transfer_8, mosi, miso, sclk, 8)
`SPI_TRANSFER_TASK(spi_transfer_32, mosi, miso, sclk, 32)
reg [7:0]value = 0;
reg [31:0]count = 0;

integer i;
initial begin
    $dumpfile(`DUMPSTR(`VCD_OUTPUT));
    $dumpvars(0, system);

    for(i=0; i<25; i++) begin
        #1 wheel_sensor[1:0] = 2'b00;
        #1 wheel_sensor[1:0] = 2'b01;
        #1 wheel_sensor[1:0] = 2'b11;
        #1 wheel_sensor[1:0] = 2'b10;
    end
    #1
    for(i=0; i<17; i++) begin
        #1 wheel_sensor[3:2] = 2'b00;
        #1 wheel_sensor[3:2] = 2'b01;
        #1 wheel_sensor[3:2] = 2'b11;
        #1 wheel_sensor[3:2] = 2'b10;
    end
    #1
    for(i=0; i<12; i++) begin
        #1 wheel_sensor[5:4] = 2'b00;
        #1 wheel_sensor[5:4] = 2'b10;
        #1 wheel_sensor[5:4] = 2'b11;
        #1 wheel_sensor[5:4] = 2'b01;
    end
    #1
    for(i=0; i<36; i++) begin
        #1 wheel_sensor[7:6] = 2'b00;
        #1 wheel_sensor[7:6] = 2'b10;
        #1 wheel_sensor[7:6] = 2'b11;
        #1 wheel_sensor[7:6] = 2'b01;
    end
    #10
    ssel = 0;
    spi_transfer_8(8'h30, value);
    spi_transfer_32(8'h00, count);
    `EXPECT(count, 32'h21000000);
    spi_transfer_32(8'h00, count);
    `EXPECT(count, 32'h16000000);
    spi_transfer_32(8'h00, count);
    `EXPECT(count, 32'hF1FFFFFF);
    spi_transfer_32(8'h00, count);
    `EXPECT(count, 32'hD0FFFFFF);
    ssel = 1;
    #1

    //#20000

    $display("End of simulation");
    $finish;
end

endmodule
