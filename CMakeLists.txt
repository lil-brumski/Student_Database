cmake_minimum_required(VERSION 3.20.3)

project(Student_Database VERSION 1.0.0 DESCRIPTION "Just for fun.")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

add_executable(student.o test/main.cpp ${SOURCES})

target_include_directories(student.o PRIVATE include)