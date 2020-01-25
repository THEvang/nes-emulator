#include <Opcodes.h>
#include <BitOperations.h>

void LDA(Cpu& cpu, Addressing_mode addressing_mode) {

    uint8_t operand = 0;
    switch(addressing_mode) {
        case Addressing_mode::Immediate:
            operand = cpu.memory->read(cpu.program_counter + 1);
            cpu.program_counter += 2;
            cpu.cycles += 2;
            break;
        case Addressing_mode::Zero_page:
            uint16_t operand_address = cpu.memory->read(cpu.program_counter + 1);
            operand = cpu.memory->read(operand_address);
            cpu.program_counter += 2;
            cpu.cycles += 2;
            break;
        case Addressing_mode::Zero_page_x:
        
        case Addressing_mode::Absolute:
            uint16_t address = (cpu.memory->read(cpu.program_counter+2) << 8) | cpu.memory->read(cpu.program_counter+1); 
            operand = cpu.memory->read(address);
            cpu.program_counter += 3;
            cpu.cycles += 4;
    }
}

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

