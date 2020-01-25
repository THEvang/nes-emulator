#include <Cpu.h>

enum class Addressing_mode {
    Immediate,
    Zero_page,
    Zero_page_x,
    Zero_page_y,
    Absolute,
    Absolute_y,
    Absolute_x,
    Implied,
    Accumulator,
    Indexed,
    Zero_page,
    Indirect,
    Indirect_x,
    Indirect_y,
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

void BCC(Cpu& cpu);
void BCS(Cpu& cpu);
void BEQ(Cpu& cpu);
void BMI(Cpu& cpu);
void BNE(Cpu& cpu);
void BPL(Cpu& cpu);
void BVC(Cpu& cpu);
void BVS(Cpu& cpu);

void JMP(Cpu& cpu, Addressing_mode addressing_mode);
void JSR(Cpu& cpu);
void RTI(Cpu& cpu);
void RTS(Cpu& cpu);

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


enum class Opcodes {
    BRK = 0x00,
    ORA_indirect_x,
    ORA_zero_page = 0x05,
    ASL_zero_page = 0x06,
    PHP = 0x08,
    ORA_immediate,
    ASL_accumulator,
    ORA_absolute = 0x0d,
    ASL_absolute,
    BPL = 0x10,
    ORA_indirect_y,
    ORA_zero_page_x = 0x15,
    ASL_zero_page_x,
    CLC = 0x18,
    ORA_absolute_y,
    ORA_absolute_x = 0x1d,
    ASL_absolute_x,
    JSR = 0x20,
    AND_indirect_x = 0x21,
    BIT_zero_page = 0x24,
    AND_zero_page,
    ROL_zero_page,
    PLP = 0x28,
    AND_immediate,
    ROL_accumulator,
    BIT_absolute= 0x2C,
    AND_absolute,
    ROL_absolute,
    BMI = 0x30,
    AND_indirect_y,
    AND_zero_page_x = 0x35,
    ROL_zero_page_x,
    SEC = 0x38,
    AND_absolute_y,
    AND_absolute_x = 0x3D,
    ROL_absolute_x,
    RTI = 0x40,
    EOR_indirect_x,
    EOR_zero_page = 0x45,
    LSR_zero_page,
    PHA = 0x48,
    EOR_immediate,
    LSR_accumulator,
    JMP_absolute = 0x4C,
    EOR_absolute,
    LSR_absolute,
    BVC = 0x50,
    EOR_indirect_y, 
    EOR_zero_page_x = 0x55,
    LSR_zero_page_x,
    CLI = 0x58,
    EOR_absolute_y,
    EOR_absolute_x = 0x5D,
    LSR_absolute_x,
    RTS = 0x60,
    ADC_indirect_x,
    ADC_zero_page = 0x65,
    ROR_zero_page,
    PLA = 0x68,
    ADC_immediate,
    ROR_accumulator,
    JMP_indirect = 0x6C,
    ADC_absolute,
    ROR_absolute,
    BVS = 0x70,
    ADC_indirect_y,
    ADC_zero_page_x = 0x75,
    ROR_zero_page_x,
    SEI = 0x78,
    ADC_absolute_y, 
    ADC_absolute_x = 0x7D,
    ROR_absolute_x,
    STA_indirect_x = 0x81,
    STY_zero_page = 0x84,
    STA_zero_page,
    STX_zero_page,
    DEY = 0x88,
    TXA = 0x8A,
    STY_absolute = 0x8C,
    STA_absolute,
    STX_absolute,
    BCC = 0x90,
    STA_indirect_y,
    STY_zero_page_x = 0x94,
    STA_zero_page_x,
    STX_zero_page_y,
    TYA = 0x98,
    STA_absolute_y,
    TXS,
    STA_absolute_x = 0x9D,
    LDY_immediate = 0xA0,
    LDA_indirect_x,
    LDX_immediate,
    LDY_zero_page = 0xA4,
    LDA_zero_page,
    LDX_zero_page,
    TAY = 0xA8,
    LDA_immediate,
    TAX,
    LDY_absolute = 0xAC,
    LDA_absolute,
    LDX_absolute,
    BCS = 0xB0,
    LDA_indirect_y,
    LDY_zero_page_x = 0xB4,
    LDA_zero_page_x,
    LDX_zero_page_y,
    CLV = 0xB8,
    LDA_absolute_y,
    TSX,
    LDY_absolute_x = 0xBC,
    LDA_absolute_x,
    LDX_absolute_y,
    CPY_immediate = 0xC0,
    CMP_indirect_x,
    CPY_zero_page = 0xC4,
    CMP_zero_page,
    DEC_zero_page,
    INY = 0xC8,
    CMP_immediate,
    DEX,
    CPY_absolute = 0xCC,
    CMP_absolute,
    DEC_absolute,
    BNE = 0xD0,
    CMP_indirect_y,
    CMP_zero_page_x = 0xD5,
    DEC_zero_page_x,
    CLD = 0xD8,
    CMP_absolute_y,
    CPM_absolute_x = 0xDD,
    DEC_absolute_x,
    CPX_immediate = 0xE0,
    SBC_indirect_x,
    CPX_zero_page = 0xE4,
    SBC_zero_page,
    INC_zero_page,
    INX = 0xE8,
    SBC_immediate,
    NOP,
    CPX_absolute = 0xEC,
    SBC_absolute,
    INC_absolute,
    BEQ = 0xF0,
    SBC_indirect_y,
    SBC_zero_page_x = 0xF5,
    INC_zero_page_x,
    SED = 0xF8,
    SBC_absolute_y,
    SBC_absolute_x = 0xFD,
    INC_absolute_x
};