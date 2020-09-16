#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include <cstdint>
#include <array>

#include "BitOperations.hpp"

class Cpu {
public:
    enum class Register {
        A,
        X,
        Y,
        P,
    };

    enum class Flag {
        Carry = 0,
        Zero,
        Interrupt_Disable,
        Decimal,
        Overflow = 6,
        Negative
    };

    uint8_t get(Cpu::Register r) const { return m_registers[static_cast<int>(r)];}
    uint8_t set(Cpu::Register r, uint8_t value) {
        return m_registers[static_cast<int>(r)] = value;
    }

    bool test_flag(Cpu::Flag f) const {
        const auto flags = get(Cpu::Register::P);
        return is_set(flags, static_cast<int>(f));
    }

    using Stack_Pointer = uint16_t;
    Stack_Pointer sp = 0xFD;

private:

    std::array<uint8_t, 4> m_registers {0, 0, 0, 0x34};
};


SCENARIO("Given a Cpu") {
    Cpu cpu;

    REQUIRE(cpu.get(Cpu::Register::A) == 0);
    REQUIRE(cpu.get(Cpu::Register::X) == 0);
    REQUIRE(cpu.get(Cpu::Register::Y) == 0);
    REQUIRE(cpu.get(Cpu::Register::P) == 0x34);
    REQUIRE(cpu.sp == 0xFD);

    WHEN("Setting Register Values") {
        cpu.set(Cpu::Register::A, 0x10);
        cpu.set(Cpu::Register::X, 0x11);
        cpu.set(Cpu::Register::Y, 0x12);
        cpu.set(Cpu::Register::P, 0x13);
        
        REQUIRE(cpu.get(Cpu::Register::A) == 0x10);
        REQUIRE(cpu.get(Cpu::Register::X) == 0x11);
        REQUIRE(cpu.get(Cpu::Register::Y) == 0x12);
        REQUIRE(cpu.get(Cpu::Register::P) == 0x13);
    }

    THEN("Carry flag is not set") {
        REQUIRE(!cpu.test_flag(Cpu::Flag::Carry));
    }

    THEN("Zero flag is not set") {
        REQUIRE(!cpu.test_flag(Cpu::Flag::Zero));
    }

    THEN("Interrupts are disabled") {
        REQUIRE(cpu.test_flag(Cpu::Flag::Interrupt_Disable));
    }
    
    THEN("Decimal flag is not set") {
        REQUIRE(!cpu.test_flag(Cpu::Flag::Decimal));
    }

    THEN("Overflow flag is not set") {
        REQUIRE(!cpu.test_flag(Cpu::Flag::Overflow));
    }

    THEN("Negative flag is not set") {
        REQUIRE(!cpu.test_flag(Cpu::Flag::Negative)); 
    }
}