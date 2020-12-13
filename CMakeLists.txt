cmake_minimum_required(VERSION 3.4)

project(complex)

## Compile as C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Compile with the highest warning level
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

## System dependencies
find_package(OpenCV REQUIRED)

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(data_type src/data_type.cpp)
add_executable(string_function src/string_function.cpp)
add_executable(precedence_associativity_control_flow src/precedence_associativity_control_flow.cpp)
add_executable(break_continue src/break_continue.cpp)
add_executable(conditional_operator src/conditional_operator.cpp)
add_executable(creating_game_menu src/creating_game_menu.cpp)
add_executable(collection src/collection.cpp)

## Specify libraries to link a library or executable target against

