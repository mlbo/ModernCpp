cmake_minimum_required(VERSION 3.1)
project(first_project)
set(CMAKE_CXX_STANDARD 17)


include_directories(include/ include/ipb_arithmetic/ )

add_library(subtract src/subtract.cpp) # creates subtract.a
add_library(sum src/sum.cpp)

add_executable(main src/main.cpp) # main.o

# tell the linker to bind these objects together
target_link_libraries(main subtract sum)
