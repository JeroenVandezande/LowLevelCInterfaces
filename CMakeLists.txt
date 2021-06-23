cmake_minimum_required(VERSION 3.19)
project(LowLevelCInterfaces LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_library(LowLevelCInterfaces spi.h i2c.h)

SET_TARGET_PROPERTIES(LowLevelCInterfaces PROPERTIES LINKER_LANGUAGE C)