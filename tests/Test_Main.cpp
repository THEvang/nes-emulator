#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include <cstdint>
#include <array>

class Cpu {
public:
    enum class Register {
        A,
        X,
        Y,
        P,
    };

    uint8_t get(Cpu::Register r) { return m_registers[static_cast<int>(r)];}

private:

    std::array<uint8_t, 4> m_registers {0,0,0,0x34};

};


SCENARIO("Given a Cpu") {
    Cpu cpu;

    REQUIRE(cpu.get(Cpu::Register::A) == 0);
    REQUIRE(cpu.get(Cpu::Register::X) == 0);
    REQUIRE(cpu.get(Cpu::Register::Y) == 0);
    REQUIRE(cpu.get(Cpu::Register::P) == 0x34);
}