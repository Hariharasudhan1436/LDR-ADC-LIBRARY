cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(ldr_adc_project)

pico_sdk_init()

add_executable(ldr_adc
    main.cpp
    ldr.cpp
)

target_link_libraries(ldr_adc pico_stdlib hardware_adc)
pico_add_extra_outputs(ldr_adc)
