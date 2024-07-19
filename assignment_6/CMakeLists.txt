cmake_minimum_required(VERSION 3.22)
project(assignment_6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(task_1 task_1.cpp)

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(task_2 task_2.cpp)
target_link_libraries(task_2 ${Boost_LIBRARIES})

