cmake_minimum_required(VERSION 3.2)

project(wh_dice)

add_executable(wh_dice
src/main.cpp
src/dice_roll.cpp
src/dice.cpp)

target_include_directories(wh_dice PUBLIC
include)

target_compile_options(wh_dice PUBLIC -Wall -g)

set_property(TARGET wh_dice PROPERTY CXX_STANDARD 17)
set_property(TARGET wh_dice PROPERTY CXX_STANDARD_REQUIRED on)