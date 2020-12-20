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
add_executable(guessing_game_vector src/guessing_game_vector.cpp)
add_executable(collection src/collection.cpp)
add_executable(vector src/vector.cpp)
add_executable(guessing_game_array src/guessing_game_array.cpp)
add_executable(range_based_for_loop src/range_based_for_loop.cpp)
add_executable(reading_file src/reading_file.cpp)
add_executable(multidimention_array_vector src/multidimention_array_vector.cpp)
add_executable(swap src/swap.cpp)
add_executable(math_stuff src/math_stuff.cpp src/math.cpp)
add_executable(main src/main.cpp)

## Specify libraries to link a library or executable target against

