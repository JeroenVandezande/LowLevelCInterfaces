cmake_minimum_required(VERSION 3.19)
project(LowLevelCInterfaces LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_library(LowLevelCInterfaces INTERFACE LL_spi.h LL_i2c.h LL_uart.h)

SET_TARGET_PROPERTIES(LowLevelCInterfaces PROPERTIES LINKER_LANGUAGE C)
target_include_directories (LowLevelCInterfaces INTERFACE .)