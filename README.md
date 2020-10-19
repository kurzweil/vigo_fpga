# vigo_fpga
FPGA based functionality for a scaled autonomous race car

For development install `APIO` and `tinyprog`:

```bash
$ pip install apio==0.5.4 tinyprog
$ apio install system scons icestorm iverilog
$ apio drivers --serial-enable
```

For testing install `arduino-mk`
```bash
$ brew tap sudar/arduino-mk
$ brew install arduino-mk
```

For simulation install `gtkwave`
```bash
$ brew install gtkwave
``` 
