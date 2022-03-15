cmake_minimum_required(VERSION 3.16)

project(Boom)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

if(WIN32)
	add_definitions(-DFLAPJACK_WINDOWS)
elseif(APPLE)
	add_definitions(-DFLAPJACK_MACOS)
elseif(UNIX)
	add_definitions(-DFLAPJACK_LINUX)
endif()

add_subdirectory(Boom)
add_subdirectory(Flapjack)
add_subdirectory(glfw)