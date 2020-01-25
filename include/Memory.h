class Memory {
public:

    using Byte = uint8_t;
    using Address = uint16_t;

    Memory();
    Byte read(const Address);
    void write(const Address, const Byte);
};
