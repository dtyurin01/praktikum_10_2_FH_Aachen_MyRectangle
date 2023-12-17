cmake_minimum_required(VERSION 3.26)
project(praktikum_10_2_FH_Aachen_MyRectangle)

set(CMAKE_CXX_STANDARD 17)

add_executable(praktikum_10_2_FH_Aachen_MyRectangle main.cpp
        MyCanvas.cpp
        MyRectangle.h
        MyRectangle.cpp
        test_MyCanvas.cpp
        test_MyRectangle.cpp)
