// #include "Cpu.hpp"
// #include "Opcodes.hpp"

// #include <iostream>

// void Cpu::execute() {
    
//     const auto opcode = memory->read(program_counter);

//     switch (static_cast<Opcodes>(opcode)) {
//         case Opcodes::BRK:
//             BRK(*this);
//             break;
//         case Opcodes::ORA_indirect_x:
//             ORA(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::ORA_zero_page:
//             ORA(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::ASL_zero_page:
//             ORA(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::PHP:
//             PHP(*this);
//             break;
//         case Opcodes::ORA_immediate:
//             ORA(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::ASL_accumulator:
//             ASL(*this, Addressing_mode::Accumulator);
//             break;
//         case Opcodes::ORA_absolute:
//             ORA(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::ASL_absolute:
//             ASL(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BPL:
//             BPL(*this);
//             break;
//         case Opcodes::ORA_indirect_y:
//             ORA(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::ORA_zero_page_x:
//             ORA(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::ASL_zero_page_x:
//             ASL(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::CLC:
//             CLC(*this);
//             break;
//         case Opcodes::ORA_absolute_y:
//             ORA(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::ORA_absolute_x:
//             ORA(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::ASL_absolute_x:
//             ASL(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::JSR:
//             JSR(*this);
//             break;
//         case Opcodes::AND_indirect_x:
//             AND(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::BIT_zero_page:
//             BIT(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::AND_zero_page:
//             AND(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::ROL_zero_page:
//             ROL(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::PLP:
//             PLP(*this);
//             break;
//         case Opcodes::AND_immediate:
//             AND(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::ROL_accumulator:
//             ROL(*this, Addressing_mode::Accumulator);
//             break;
//         case Opcodes::BIT_absolute:
//             BIT(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::AND_absolute:
//             AND(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::ROL_absolute:
//             ROL(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BMI:
//             BMI(*this);
//             break;
//         case Opcodes::AND_indirect_y:
//             AND(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::AND_zero_page_x:
//             AND(*this, Addressing_mode::Zero_page_y);
//             break;
//         case Opcodes::ROL_zero_page_x:
//             ROL(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::SEC:
//             SEC(*this);
//             break;
//         case Opcodes::AND_absolute_y:
//             AND(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::AND_absolute_x:
//             AND(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::ROL_absolute_x:
//             ROL(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::RTI:
//             RTI(*this);
//             break;
//         case Opcodes::EOR_indirect_x:
//             EOR(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::EOR_zero_page:
//             EOR(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::LSR_zero_page:
//             LSR(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::PHA:
//             PHA(*this);
//             break;
//         case Opcodes::EOR_immediate:
//             EOR(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::LSR_accumulator:
//             LSR(*this, Addressing_mode::Accumulator);
//             break;
//         case Opcodes::JMP_absolute:
//             JMP(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::EOR_absolute:
//             EOR(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::LSR_absolute:
//             LSR(*this, Addressing_mode::Absolute);
//             break;    
//         case Opcodes::BVC:
//             BVC(*this);
//             break;
//         case Opcodes::EOR_indirect_y:
//             EOR(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::EOR_zero_page_x:
//             EOR(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::LSR_zero_page_x:
//             LSR(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::CLI:
//             CLI(*this);
//             break;
//         case Opcodes::EOR_absolute_y:
//             EOR(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::EOR_absolute_x:
//             EOR(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::LSR_absolute_x:
//             LSR(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::RTS:
//             RTS(*this);
//             break;
//         case Opcodes::ADC_indirect_x:
//             ADC(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::ADC_zero_page:
//             ADC(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::ROR_zero_page:
//             ROR(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::PLA:
//             PLA(*this);
//             break;
//         case Opcodes::ADC_immediate:
//             ADC(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::ROR_accumulator:
//             ROR(*this, Addressing_mode::Accumulator);
//             break;
//         case Opcodes::JMP_indirect:
//             JMP(*this, Addressing_mode::Indirect);
//             break;
//         case Opcodes::ADC_absolute:
//             ADC(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::ROR_absolute:
//             ROR(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BVS:
//             BVS(*this);
//             break;
//         case Opcodes::ADC_indirect_y:
//             ADC(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::ADC_zero_page_x:
//             ADC(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::ROR_zero_page_x:
//             ROR(*this, Addressing_mode::Zero_page_x);
//         case Opcodes::SEI:
//             SEI(*this);
//             break;
//         case Opcodes::ADC_absolute_y:
//             ADC(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::ADC_absolute_x:
//             ADC(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::ROR_absolute_x:
//             ROR(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::STA_indirect_x:
//             STA(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::STY_zero_page:
//             STY(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::STA_zero_page:
//             STA(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::STX_zero_page:
//             STX(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::DEY:
//             DEY(*this);
//             break;
//         case Opcodes::TXA:
//             TXA(*this);
//             break;
//         case Opcodes::STY_absolute:
//             STY(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::STA_absolute:
//             STA(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::STX_absolute:
//             STX(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BCC:
//             BCC(*this);
//             break;
//         case Opcodes::STA_indirect_y:
//             STA(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::STY_zero_page_x:
//             STY(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::STA_zero_page_x:
//             STA(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::STX_zero_page_y:
//             STX(*this, Addressing_mode::Zero_page_y);
//             break;
//         case Opcodes::TYA:
//             TYA(*this);
//             break;
//         case Opcodes::STA_absolute_y:
//             STA(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::TXS:
//             TXS(*this);
//             break;
//         case Opcodes::STA_absolute_x:
//             STA(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::LDY_immediate:
//             LDY(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::LDA_indirect_x:
//             LDA(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::LDX_immediate:
//             LDX(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::LDY_zero_page:
//             LDY(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::LDA_zero_page:
//             LDA(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::LDX_zero_page:
//             LDX(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::TAY:
//             TAY(*this);
//             break;
//         case Opcodes::LDA_immediate:
//             LDA(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::TAX:
//             TAX(*this);
//             break;
//         case Opcodes::LDY_absolute:
//             LDY(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::LDA_absolute:
//             LDA(*this, Addressing_mode::Absolute);
//             break;        
//         case Opcodes::LDX_absolute:
//             LDX(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BCS:
//             BCS(*this);
//             break;
//         case Opcodes::LDA_indirect_y:
//             LDA(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::LDY_zero_page_x:
//             LDY(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::LDA_zero_page_x:
//             LDA(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::LDX_zero_page_y:
//             LDX(*this, Addressing_mode::Zero_page_y);
//             break;            
//         case Opcodes::CLV:
//             CLV(*this);
//             break;
//         case Opcodes::LDA_absolute_y:
//             LDA(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::TSX:
//             TSX(*this);
//             break;
//         case Opcodes::LDY_absolute_x:
//             LDY(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::LDA_absolute_x:
//             LDA(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::LDX_absolute_y:
//             LDX(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::CPY_immediate:
//             CPY(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::CMP_indirect_x:
//             CMP(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::CPY_zero_page:
//             CPY(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::CMP_zero_page:
//             CMP(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::DEC_zero_page:
//             DEC(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::INY:
//             INY(*this);
//             break;
//         case Opcodes::CMP_immediate:
//             CMP(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::DEX:
//             DEX(*this);
//             break;
//         case Opcodes::CPY_absolute:
//             CPY(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::CMP_absolute:
//             CMP(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::DEC_absolute:
//             DEC(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BNE:
//             BNE(*this);
//             break;
//         case Opcodes::CMP_indirect_y:
//             CMP(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::CMP_zero_page_x:
//             CMP(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::DEC_zero_page_x:
//             DEC(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::CPM_absolute_x:
//             CMP(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::DEC_absolute_x:
//             DEC(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::CPX_immediate:
//             CPX(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::SBC_indirect_x:
//             SBC(*this, Addressing_mode::Indirect_x);
//             break;
//         case Opcodes::CPX_zero_page:
//             CPX(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::SBC_zero_page:
//             SBC(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::INC_zero_page:
//             INC(*this, Addressing_mode::Zero_page);
//             break;
//         case Opcodes::INX:
//             INX(*this);
//             break;
//         case Opcodes::SBC_immediate:
//             SBC(*this, Addressing_mode::Immediate);
//             break;
//         case Opcodes::NOP:
//             NOP(*this);
//             break;
//         case Opcodes::CPX_absolute:
//             CPX(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::SBC_absolute:
//             SBC(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::INC_absolute:
//             INC(*this, Addressing_mode::Absolute);
//             break;
//         case Opcodes::BEQ:
//             BEQ(*this);
//             break;
//         case Opcodes::SBC_indirect_y:
//             SBC(*this, Addressing_mode::Indirect_y);
//             break;
//         case Opcodes::SBC_zero_page_x:
//             SBC(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::INC_zero_page_x:
//             INC(*this, Addressing_mode::Zero_page_x);
//             break;
//         case Opcodes::SED:
//             SED(*this);
//             break;
//         case Opcodes::SBC_absolute_y:
//             SBC(*this, Addressing_mode::Absolute_y);
//             break;
//         case Opcodes::SBC_absolute_x:
//             SBC(*this, Addressing_mode::Absolute_x);
//             break;
//         case Opcodes::INC_absolute_x:
//             INC(*this, Addressing_mode::Absolute_x);
//             break;
//         default:
//             std::cerr << "Uknown operation\n";
//             std::cerr << "Opcode: " << opcode << "\n";
//         }

// }