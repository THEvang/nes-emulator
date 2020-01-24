cmake_minimum_required(VERSION 3.5)
project(nes_emulator_tests)

find_package(GTest REQUIRED)

add_executable(nes_emulator_tests
    opcodes/BitwiseTests.cpp
    opcodes/BranchTests.cpp
    opcodes/JumpTests.cpp
    opcodes/MathTests.cpp
    opcodes/RegisterTests.cpp
    opcodes/StackTests.cpp
    opcodes/StorageTests.cpp
    opcodes/SystemTests.cpp
)

target_link_libraries(nes_emulator_tests PRIVATE GTest::GTest GTest::Main)