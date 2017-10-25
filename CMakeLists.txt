cmake_minimum_required(VERSION 2.8)
project(arpro_lab_group_a)
set(CMAKE_BLUID_TYPE Debug)
add_compile_options(-std=c++11)

#la ligne suivante équivaut à gcc -o hello hello.cpp
add_executable(hello hello/hello.cpp)

add_executable(find_num stupid_games/find_num.cpp)

add_executable(nDminimization function_minimization/minim_main.cpp)