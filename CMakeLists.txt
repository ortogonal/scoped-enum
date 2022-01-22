cmake_minimum_required(VERSION 3.5)

project(mordern-cpp-flags LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(HEADERS
    file.h
)

set(SOURCES
    file.cpp
    main.cpp
)

add_executable(mordern-cpp-flags ${SOURCES} ${HEADERS})
