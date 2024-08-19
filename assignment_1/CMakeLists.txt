cmake_minimum_required(VERSION 3.5)
project(assignment_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(task_a task_a.cpp)
add_executable(task_b task_b.cpp)

configure_file(temp_data temp_data COPYONLY)