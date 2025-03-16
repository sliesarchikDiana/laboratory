cmake_minimum_required(VERSION 3.30)
project(laboratory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(laboratory
    blockbuster.cpp
    blockbuster.h
    main.cpp
        sciFy.cpp
        sciFy.h
        romCom.cpp
        romCom.h
        thriller.cpp
        thriller.h)
