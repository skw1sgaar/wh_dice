cmake_minimum_required(VERSION 3.2)

project(wh_dice)

add_executable(wh_dice
src/main.cpp
src/dice_roll.cpp)

target_include_directories(wh_dice PUBLIC
include)

target_compile_options(wh_dice PUBLIC -Wall -g)
