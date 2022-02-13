cmake_minimum_required(VERSION 3.2)

project(wh_dice)

add_executable(wh_dice
src/main.c)

target_include_directories(wh_dice PUBLIC
include)

target_compile_options(wh_dice PUBLIC -Wall -g)

set_property(TARGET wh_dice PROPERTY C_STANDARD 17)
set_property(TARGET wh_dice PROPERTY C_STANDARD_REQUIRED on)