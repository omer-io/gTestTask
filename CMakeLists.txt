cmake_minimum_required(VERSION 3.30.1)
project(gtesttask)

include_directories(include)

set(SOURCES app/mainapp.cpp src/student.cpp)

add_executable(gtesttask ${SOURCES})