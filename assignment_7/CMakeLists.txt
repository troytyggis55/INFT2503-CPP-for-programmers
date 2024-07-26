cmake_minimum_required(VERSION 3.22)
project(assignment_7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(task_1 fraction.cpp fraction.h task_1.cpp)
add_executable(task_2 Set.cpp Set.h task_2.cpp)
