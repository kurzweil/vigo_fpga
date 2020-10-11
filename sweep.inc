$display("Sweep 0");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 0");
// 1011110101011010 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 0111101010110100 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 1111010101101000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 1110101011010000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 1101010110100000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 1010101101000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0101011010000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 1010110100000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 0101101000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 1011010000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 0110100000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 1101000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 1010000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 0100000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 1000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 0");
// 0111110111011110 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 1111101110111100 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 1111011101111000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 1110111011110000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 1101110111100000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 1011101111000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0111011110000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 1110111100000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 1101111000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 1011110000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 0111100000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 1111000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 1110000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 1100000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 1000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 0");
// 1111010110011100 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 1110101100111000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 1101011001110000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 1010110011100000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 0101100111000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 1011001110000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0110011100000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 1100111000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 1001110000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 0011100000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 0111000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 1110000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 1100000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 1000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 0000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 0");
// 1001010111111100 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 0010101111111000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 0101011111110000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 1010111111100000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 0101111111000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 1011111110000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0111111100000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 1111111000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 1111110000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 1111100000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 1111000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 1110000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 1100000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 1000000000000000 1
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 0000000000000000 1
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=0, data=1, axis=0
#84
lh_sensor = 3'b111;
#116
lh_sensor = 3'b000; // skip=1, data=1, axis=0
#124
lh_sensor = 3'b111;
#76
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 0");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 1");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 2");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 3");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 4");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 5");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 6");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 7");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 8");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 9");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 10");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 11");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 12");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 13");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 14");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=1, data=0, axis=1
#114
lh_sensor = 3'b111;
#86
lh_sensor = 3'b000; // skip=0, data=0, axis=1
#74
lh_sensor = 3'b111;
#126
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 15");
// 0000000000000000 0
lh_sensor = 3'b000; // skip=0, data=0, axis=0
#64
lh_sensor = 3'b111;
#136
lh_sensor = 3'b000; // skip=1, data=0, axis=0
#104
lh_sensor = 3'b111;
#96
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
$display("Sweep 16");
lh_sensor = 3'b000; // skip=0, data=1, axis=1
#94
lh_sensor = 3'b111;
#106
lh_sensor = 3'b000; // skip=1, data=1, axis=1
#134
lh_sensor = 3'b111;
#66
#200
system.lh_sensor_instance[0].lh_sensor.counter = 200000;
system.lh_sensor_instance[1].lh_sensor.counter = 200000;
system.lh_sensor_instance[2].lh_sensor.counter = 200000;
lh_sensor = 3'b000;
#20
lh_sensor = 3'b111;
#20
#200
