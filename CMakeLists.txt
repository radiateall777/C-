cmake_minimum_required(VERSION 3.17)
project(Minesweeper C)

set(CMAKE_C_STANDARD 99)

add_executable(Minesweeper main.c game.c game.h)