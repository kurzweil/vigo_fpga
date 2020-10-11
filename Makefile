APIO = $(HOME)/.apio
modules = hardware.v debounce.v lh_ootx.v lh_sensor.v macros.v mem.v pll.v \
	  priority.v quadrature.v servo.v spi.v system.v trigger.v

hardware.bin: $(modules)
	apio build

servo_tb: servo.v servo_tb.v
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o servo_tb.out -D VCD_OUTPUT=servo_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" servo.v servo_tb.v'
	apio raw 'vvp -M "$(APIO)/packages/toolchain-iverilog/lib/ivl" servo_tb.out'
	gtkwave servo_tb.vcd

lh_ootx_tb: lh_ootx.v lh_ootx_tb.v
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o lh_ootx_tb.out -D VCD_OUTPUT=lh_ootx_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" lh_ootx.v lh_ootx_tb.v'
	apio raw 'vvp -M "$(APIO)/packages/toolchain-iverilog/lib/ivl" lh_ootx_tb.out'
	gtkwave lh_ootx_tb.vcd

lh_sensor_tb: lh_sensor.v lh_sensor_tb.v
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o lh_sensor_tb.out -D VCD_OUTPUT=lh_sensor_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" lh_sensor.v lh_sensor_tb.v'
	apio raw 'vvp -M "$(APIO)/packages/toolchain-iverilog/lib/ivl" lh_sensor_tb.out'
	gtkwave lh_sensor_tb.vcd

spi_tb: spi.v spi_tb.v
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o spi_tb.out -D VCD_OUTPUT=spi_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" spi.v spi_tb.v'
	apio raw 'vvp -M "$(APIO)/packages/toolchain-iverilog/lib/ivl" spi_tb.out'
	gtkwave spi_tb.vcd

system_tb: $(modules)
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o system_tb.out -D VCD_OUTPUT=system_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" $(modules) system_tb.v'
	apio raw 'vvp -M "/Users/kkurzweil/.apio/packages/toolchain-iverilog/lib/ivl" system_tb.out'
	gtkwave system_tb.vcd

system_ootx_tb: $(modules)
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o system_ootx_tb.out -D VCD_OUTPUT=system_ootx_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" $(modules) system_ootx_tb.v'
	apio raw 'vvp -M "/Users/kkurzweil/.apio/packages/toolchain-iverilog/lib/ivl" system_ootx_tb.out'
	gtkwave system_ootx_tb.vcd

system_servo_tb: $(modules)
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o system_servo_tb.out -D VCD_OUTPUT=system_servo_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" $(modules) system_servo_tb.v'
	apio raw 'vvp -M "/Users/kkurzweil/.apio/packages/toolchain-iverilog/lib/ivl" system_servo_tb.out'
	gtkwave system_servo_tb.vcd

system_wheel_tb: $(modules)
	apio raw 'iverilog -B "$(APIO)/packages/toolchain-iverilog/lib/ivl" -o system_wheel_tb.out -D VCD_OUTPUT=system_wheel_tb "$(APIO)/packages/toolchain-iverilog/vlib/cells_sim.v" $(modules) system_wheel_tb.v'
	apio raw 'vvp -M "/Users/kkurzweil/.apio/packages/toolchain-iverilog/lib/ivl" system_wheel_tb.out'
	gtkwave system_wheel_tb.vcd

all: hardware.bin

build: all
	
deploy: hardware.bin
	tinyprog --pyserial -p hardware.bin

clean:
	-rm -f *.out *.vcd *.asc *.bin *.blif *.rpt
