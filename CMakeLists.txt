cmake_minimum_required(VERSION 3.19)
project(LowLevelCInterfaces C)

set(CMAKE_C_STANDARD 11)

add_library(LowLevelCInterfaces spi.h i2c.h)