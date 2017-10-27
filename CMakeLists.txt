cmake_minimum_required(VERSION 2.8)
project(arpro_lab_group_a)
set(CMAKE_BLUID_TYPE Debug)
add_compile_options(-std=c++11)

include_directories(include)

#la ligne suivante équivaut à gcc -o hello hello.cpp
add_executable(hello hello/hello.cpp)

add_executable(find_num stupid_games/find_num.cpp)

#add_executable(nDminimization function_minimization/minim_main.cpp)

#add_executable(bataille_navale bataille_navale/main.cpp bataille_navale/bataille_navale.cpp)

add_executable(battleship battleship/main.cpp battleship/player.cpp)

add_executable(bataille_navale_tableau bataille_navale_tableau/battleship.cpp bataille_navale_tableau/game.cpp)