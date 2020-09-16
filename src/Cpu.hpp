#pragma once

#include <cstdint>
#include "Memory.hpp"

class Cpu {
public:

    void execute();

    using Program_counter =  uint16_t;
    using Stack_pointer = uint8_t;
    using Byte = uint8_t;

    Stack_pointer stack_pointer;
    Program_counter program_counter;

    Byte accumulator;
    Byte index_x;
    Byte index_y;
    Byte status;

    Memory* memory;

    int cycles = 0;

    const static int carry_flag_bit = 0;
    const static int interrupt_disable_flag_bit = 2;
    const static int decimal_flag_bit = 3;
    const static int overflow_flag_bit = 6;
};

