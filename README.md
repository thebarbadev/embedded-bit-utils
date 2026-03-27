# Embedded Bit Utils

A simple C library built as part of my journey learning embedded systems development.
Simulates low-level register manipulation used in STM32 microcontrollers for bit manipulation operations on 32-bit registers.

## Functions

- `set_bit(reg, bit)`    - sets bit N in register
- `clear_bit(reg, bit)`  - clears bit N in register
- `toggle_bit(reg, bit)` - toggles bit N in register
- `read_bit(reg, bit)`   - returns value of bit N (0 or 1)

## Usage

~~~c
uint32_t reg = 0;
set_bit(&reg, 5);  // 0x00000020
clear_bit(&reg, 5); // 0x00000000
toggle_bit(&reg, 6); // 0x00000040
~~~

## Build

~~~bash
make
~~~

Or manually:

~~~bash
gcc -o main bits.c example/main.c
~~~

# Running

~~~bash
make run
~~~

Or manually:

~~~bash
./build/main
~~~