cmake_minimum_required(VERSION 3.15)
project(nes_emulator
    VERSION 0.1
    DESCRIPTION "Nes Emulator"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(nes)
target_include_directories(nes PRIVATE src)

add_subdirectory(src)

add_executable(tests tests/Test_Main.cpp)