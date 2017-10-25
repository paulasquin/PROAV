cmake_minimum_required(VERSION 2.8)
project(arpro_lab_group_a)
set(CMAKE_BLUID_TYPE Debug)
add_compile_options(-std=c++11)

#la ligne suivante équivaut à gcc -o hello hello.cpp
add_executable(hello hello/hello.cpp)