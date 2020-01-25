#include <Cpu.h>

enum class Addressing_mode {
    Immediate,
    Zero_page,
    Absolute,
    Implied,
    Accumulator,
    Indexed,
    Zero_page,
    Indirect,
    Pre_indexed,
    Post_indexed,
    Relative
};

void LDA(Cpu& cpu, Addressing_mode addressing_mode);
void LDX(Cpu& cpu, Addressing_mode addressing_mode);
void LDY(Cpu& cpu, Addressing_mode addressing_mode);

void STA(Cpu& cpu, Addressing_mode addressing_mode);
void STX(Cpu& cpu, Addressing_mode addressing_mode);
void STY(Cpu& cpu, Addressing_mode addressing_mode);

void TAX(Cpu& cpu);
void TAY(Cpu& cpu);
void TSX(Cpu& cpu);
void TXA(Cpu& cpu);
void TXS(Cpu& cpu);
void TYA(Cpu& cpu);

void ADC(Cpu& cpu, Addressing_mode addressing_mode);
void DEC(Cpu& cpu, Addressing_mode addressing_mode);
void DEX(Cpu& cpu);
void DEY(Cpu& cpu);
void INC(Cpu& cpu, Addressing_mode addressing_mode);
void INX(Cpu& cpu);
void INY(Cpu& cpu);
void SBC(Cpu& cpu, Addressing_mode addressing_mode);

void AND(Cpu& cpu, Addressing_mode addressing_mode);
void ASL(Cpu& cpu, Addressing_mode addressing_mode);
void BIT(Cpu& cpu, Addressing_mode addressing_mode);
void EOR(Cpu& cpu, Addressing_mode addressing_mode);
void LSR(Cpu& cpu, Addressing_mode addressing_mode);
void ORA(Cpu& cpu, Addressing_mode addressing_mode);
void ROL(Cpu& cpu, Addressing_mode addressing_mode);
void ROR(Cpu& cpu, Addressing_mode addressing_mode);

void BCC(Cpu& cpu, Addressing_mode addressing_mode);
void BCS(Cpu& cpu, Addressing_mode addressing_mode);
void BEQ(Cpu& cpu, Addressing_mode addressing_mode);
void BMI(Cpu& cpu, Addressing_mode addressing_mode);
void BNE(Cpu& cpu, Addressing_mode addressing_mode);
void BPL(Cpu& cpu, Addressing_mode addressing_mode);
void BVC(Cpu& cpu, Addressing_mode addressing_mode);
void BVS(Cpu& cpu, Addressing_mode addressing_mode);

void JMP(Cpu& cpu, Addressing_mode addressing_mode);
void JSR(Cpu& cpu, Addressing_mode addressing_mode);
void RTI(Cpu& cpu, Addressing_mode addressing_mode);
void RTS(Cpu& cpu, Addressing_mode addressing_mode);

void CLC(Cpu& cpu);
void CLD(Cpu& cpu);
void CLI(Cpu& cpu);
void CLV(Cpu& cpu);
void CMP(Cpu& cpu, Addressing_mode addressing_mode);
void CPX(Cpu& cpu, Addressing_mode addressing_mode);
void CPY(Cpu& cpu, Addressing_mode addressing_mode);
void SEC(Cpu& cpu);
void SED(Cpu& cpu);
void SEI(Cpu& cpu);

void PHA(Cpu& cpu);
void PHP(Cpu& cpu);
void PLA(Cpu& cpu);
void PLP(Cpu& cpu);

void BRK(Cpu& cpu);
void NOP(Cpu& cpu);