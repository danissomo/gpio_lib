cmake_minimum_required(VERSION 3.10.2)
project(gpio_lib)

file(GLOB lib_source "*.c")
get_filename_component(dir_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
file(GLOB lib_headers "*.h")
add_library("${dir_name}" STATIC  ${lib_source})

