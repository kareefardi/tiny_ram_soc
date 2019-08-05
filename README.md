# tiny ram soc
Picorv32 SoC that uses only BRAM, not flash memory
This assumes that you are already familiar with tinyfpga
More can be found [here](https://tinyfpga.com/b-series-guide.html)

Table of Contents
-----------------

   * [Dependancies](#dependancies)

   * [Installation and usage](#installation-and-usage)

Dependancies
------------
This relies on icestorm and RISCV GCC toolchain. You can build your 
own using instructions [here](https://discourse.tinyfpga.com/t/riscv-example-project-on-tinyfpga-bx/451)

Installation and usage
----------------------
Clone the repo with the current active branch using:
```
git clone https://github.com/kareefardi/tiny_ram_soc -b feature_rsa --recursive
cd tiny_ram_soc
```

Examples are available in `examples` 

Try one using the following:
```
cd examples/rsa
make
```

You will probably get the following error message:
```
    No port was specified and no active bootloaders found.
    Activate bootloader by pressing the reset button.
```

- So depending on your environment run `make` or `sudo make` after reset
- GND is connected to pin labled G (first one) and TX to pin 1
- Baud rate is set at `115200`

