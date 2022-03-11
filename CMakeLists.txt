cmake_minimum_required(VERSION 3.16)

project(Boom)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(Boom)
add_subdirectory(Flapjack)
add_subdirectory(glfw)