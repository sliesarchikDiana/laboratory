cmake_minimum_required(VERSION 3.30)
project(laboratory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(laboratory
        action.cpp
        action.h
    main.cpp
        sciFy.cpp
        sciFy.h
        romance.cpp
        romance.h
        thriller.cpp
        thriller.h
        movie.cpp
        movie.h
        movie.cpp)
