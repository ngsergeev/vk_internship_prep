cmake_minimum_required(VERSION 3.10)
project(src)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(src
        Bot.cpp
        Bot.h
        Field.cpp
        Field.h
        main.cpp
        MNTS.cpp
        MNTS.h)
