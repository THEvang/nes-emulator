#include "Opcodes.hpp"
#include "BitOperations.hpp"

void CLC(Cpu& cpu) {

    cpu.program_counter++;
    clear_bit(cpu.status, Cpu::carry_flag_bit);
    cpu.cycles++;
}

void CLD(Cpu& cpu) {
    
    cpu.program_counter++;
    clear_bit(cpu.status, Cpu::decimal_flag_bit);
    cpu.cycles++;
}

void CLI(Cpu& cpu) {

    cpu.program_counter++;
    clear_bit(cpu.status, Cpu::interrupt_disable_flag_bit);
    cpu.cycles++;
}

void CLV(Cpu& cpu) {

    cpu.program_counter++;
    clear_bit(cpu.status, Cpu::overflow_flag_bit);
    cpu.cycles++;
}

void SEC(Cpu& cpu) {

    cpu.program_counter++;
    set_bit(cpu.status, Cpu::carry_flag_bit);
    cpu.cycles++;
}

void SED(Cpu& cpu) {
    
    cpu.program_counter++;
    set_bit(cpu.status, Cpu::decimal_flag_bit);
    cpu.cycles++;
}

void SEI(Cpu& cpu) {

    cpu.program_counter++;
    set_bit(cpu.status, Cpu::interrupt_disable_flag_bit);
    cpu.cycles++;
}

void NOP(Cpu& cpu) {

    cpu.program_counter++;
    cpu.cycles +=2;
}

