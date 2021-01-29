# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/simon/pico/pico-sdk")

# Pull in Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(blink5 C CXX)

# Initialise the Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(blink5 blink5.c )

pico_set_program_name(blink5 "blink5")
pico_set_program_version(blink5 "0.1")

pico_enable_stdio_uart(blink5 1)
pico_enable_stdio_usb(blink5 1)

# Add the standard library to the build
target_link_libraries(blink5 pico_stdlib)

pico_add_extra_outputs(blink5)

