/*
* System module
* This integration module composes all the dependant modules
*/
module System(
    input CLK,
    input TICK_CLK,
    input [NUM_LH_SENSORS-1:0]LH_SENSOR,
    input [NUM_WHEEL_SENSORS*2-1:0]WHEEL_SENSOR,
    input SSEL,
    input SCLK,
    output MISO,
    input MOSI,
    output SERVO
);
parameter NUM_LH_SENSORS = 5;
parameter NUM_LHS = 2;
parameter NUM_WHEEL_SENSORS = 4;
parameter NUM_STORES = NUM_LH_SENSORS + NUM_LHS + NUM_WHEEL_SENSORS;
parameter NUM_SENSOR_BITS = $clog2(NUM_LH_SENSORS);
parameter WHEEL_ADDRESS_OFFSET = NUM_LH_SENSORS * 4 * 4;
parameter LH_OOTX_MAX_LENGTH = 64;
parameter LH_OOTX_ADDRESS_OFFSET0 = WHEEL_ADDRESS_OFFSET + NUM_WHEEL_SENSORS * 4;
parameter LH_OOTX_ADDRESS_OFFSET1 = LH_OOTX_ADDRESS_OFFSET0 + LH_OOTX_MAX_LENGTH;

reg [7:0]address_index;
reg [7:0]address_index_max;
reg [7:0]address_offset;
reg [2:0]storing_data_location = 0;
reg store_enabled = 0;
reg [2:0]sensor_index;
wire [NUM_LH_SENSORS-1:0]lh0_data;
wire [NUM_LH_SENSORS-1:0]lh1_data;
wire [15:0]lh_ootx_data[NUM_LHS-1:0];
wire [7:0]lh_ootx_address[NUM_LHS-1:0];
wire [NUM_LHS-1:0]lh_ootx_ready;
wire [NUM_LH_SENSORS-1:0]lh0_ready;
wire [NUM_LH_SENSORS-1:0]lh1_ready;
wire [NUM_LH_SENSORS-1:0]sensor_ready;
reg [NUM_STORES-1:0]store_interrupt = 0;
wire [1:0]sensor_address[NUM_LH_SENSORS-1:0];
wire [31:0]lh_sensor_data[NUM_LH_SENSORS-1:0];

wire [NUM_SENSOR_BITS-1:0]lh0_select;
wire [NUM_SENSOR_BITS-1:0]lh1_select;
wire [NUM_LHS-1:0]lh_trigger;
EdgeTrigger trigger0 (.CLK(CLK), .IN(|lh0_ready), .RISING_EDGE(lh_trigger[0]), .FALLING_EDGE());
EdgeTrigger trigger1 (.CLK(CLK), .IN(|lh1_ready), .RISING_EDGE(lh_trigger[1]), .FALLING_EDGE());
PriorityEncoder #(NUM_LH_SENSORS) priority0 (.IN(lh0_ready), .OUT(lh0_select));
PriorityEncoder #(NUM_LH_SENSORS) priority1 (.IN(lh1_ready), .OUT(lh1_select));

wire [31:0] wheel_count[NUM_WHEEL_SENSORS-1:0];

genvar lh_sensor_id;
generate for (lh_sensor_id=0; lh_sensor_id<NUM_LH_SENSORS; lh_sensor_id=lh_sensor_id+1) begin : lh_sensor_instance
    LightHouseSensor lh_sensor(.CLK(CLK), .TICK_CLK(TICK_CLK), .SENSOR(LH_SENSOR[lh_sensor_id]), .DATA(lh_sensor_data[lh_sensor_id]), .READY(sensor_ready[lh_sensor_id]), .ADDRESS(sensor_address[lh_sensor_id]), .SYNC(), .LH0_DATA(lh0_data[lh_sensor_id]), .LH0_READY(lh0_ready[lh_sensor_id]), .LH1_DATA(lh1_data[lh_sensor_id]), .LH1_READY(lh1_ready[lh_sensor_id]));
end endgenerate

genvar wheel_sensor_id;
generate for (wheel_sensor_id=0; wheel_sensor_id<NUM_WHEEL_SENSORS; wheel_sensor_id=wheel_sensor_id+1) begin : wheel_sensor_instance
    DebouncedQuadrature quadrature (.CLK(CLK), .IN_A(WHEEL_SENSOR[wheel_sensor_id*2]), .IN_B(WHEEL_SENSOR[wheel_sensor_id*2+1]), .COUNT(wheel_count[wheel_sensor_id]));
end endgenerate

LightHouseOotx lh_ootx0 (.CLK(CLK), .DCLK(lh_trigger[0]), .DATA_IN(lh0_data[lh0_select]), .DATA_OUT(lh_ootx_data[0]), .ADDRESS(lh_ootx_address[0]), .READY(lh_ootx_ready[0]));
LightHouseOotx lh_ootx1 (.CLK(CLK), .DCLK(lh_trigger[1]), .DATA_IN(lh1_data[lh1_select]), .DATA_OUT(lh_ootx_data[1]), .ADDRESS(lh_ootx_address[1]), .READY(lh_ootx_ready[1]));

wire [7:0]mem_data_out;
wire [7:0]mem_data_in;
wire [8:0]mem_write_address;
wire mem_write_enable;

wire [8:0]address;
wire [7:0]spi_write_data;
wire spi_wren;
wire spi_start;

DualPortRam mem0 (.DIN(mem_data_in), .WRITE_EN(mem_write_enable), .WADDR(mem_write_address), .WCLK(CLK), .RADDR(address), .RCLK(CLK), .DOUT(mem_data_out));

SpiInterface #(8, 9) spi0 (.CLK(CLK),
    .SSEL(SSEL),
    .SCLK(SCLK),
    .MISO(MISO),
    .MOSI(MOSI),
    .ADDRESS(address),
    .READ_DATA(mem_data_out),
    .WREN(spi_wren),
    .WRITE_DATA(spi_write_data),
    .START(spi_start));

assign mem_write_enable = store_enabled;
assign mem_data_in = storing_data_location == 0 ? lh_sensor_data[sensor_index][(8*address_index)+:8] :
    storing_data_location == 1 ? lh_ootx_data[0][(8*address_index)+:8] :
    storing_data_location == 2 ? lh_ootx_data[1][(8*address_index)+:8] :
    wheel_count[sensor_index][(8*address_index)+:8];
assign mem_write_address = address_offset + (storing_data_location == 0 ? address_index :
    storing_data_location == 1 ? lh_ootx_address[0]+address_index :
    storing_data_location == 2 ? lh_ootx_address[1]+address_index :
    address_index);

reg [9:0]servo_value0;
Servo servo0 (.CLK(CLK), .PWM(SERVO), .VALUE(servo_value0));

reg [2:0] i;
always @(negedge CLK) begin
    if (spi_start) begin
        for(i=0; i<NUM_WHEEL_SENSORS; i++) begin
            store_interrupt[NUM_LH_SENSORS+NUM_LHS+i] = 1;
        end
    end
    if (spi_wren) begin
        if (address == 9'h14)
            servo_value0[9:8] = spi_write_data[1:0];
        if (address == 9'h15)
            servo_value0[7:0] = spi_write_data;
    end
    for(i=0; i<NUM_LH_SENSORS; i++) begin
        if (sensor_ready[i]) begin
            store_interrupt[i] = 1;
        end
    end
    for(i=0; i<NUM_LHS; i++) begin
        if (lh_ootx_ready[i]) begin
            store_interrupt[NUM_LH_SENSORS+i] = 1;
        end
    end
    if (!store_enabled) begin
        for(i=0; i<NUM_LH_SENSORS; i++) begin
            if (store_interrupt[i] && !store_enabled) begin
                storing_data_location = 0;
                sensor_index = i;
                store_interrupt[i] = 0;
                address_offset = (sensor_index*16)+(sensor_address[sensor_index]*4);
                address_index = 0;
                address_index_max = 3;
                store_enabled = 1;
            end
        end
        for(i=0; i<NUM_LHS; i++) begin
            if (store_interrupt[NUM_LH_SENSORS+i] && !store_enabled) begin
                store_interrupt[NUM_LH_SENSORS+i] = 0;
                storing_data_location = i+1;
                address_offset = i == 0 ? LH_OOTX_ADDRESS_OFFSET0 : LH_OOTX_ADDRESS_OFFSET1;
                address_index = 0;
                address_index_max = 1;
                store_enabled = 1;
            end
        end
        for(i=0; i<NUM_WHEEL_SENSORS; i++) begin
            if (store_interrupt[NUM_LH_SENSORS+NUM_LHS+i] && !store_enabled) begin
                storing_data_location = 3;
                sensor_index = i;
                store_interrupt[NUM_LH_SENSORS+NUM_LHS+i] = 0;
                address_offset = WHEEL_ADDRESS_OFFSET + i*4;
                address_index = 0;
                address_index_max = 3;
                store_enabled = 1;
            end
        end
    end
    else if (store_enabled) begin
        address_index = address_index + 1;
        if (address_index > address_index_max) begin
            store_enabled = 0;
        end
    end
end

endmodule
