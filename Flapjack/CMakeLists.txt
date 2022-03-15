set(HEADER_FILES
	Flapjack.h
	FlapjackApp.h
	FlapjackUtil.h
	GameWindow.h
	WindowImplementation.h
	specificGLFW/GlfwWindow.h
	)

set(SOURCE_FILES
	FlapjackApp.cpp
	GameWindow.cpp
	specificGLFW/GlfwWindow.cpp
	)

add_library(Flapjack SHARED ${HEADER_FILES} ${SOURCE_FILES})


add_definitions(-DFLAPJACK_LIB)
add_definitions(-DFLAPJACK_DEBUG)

include_directories(../glfw/include)
include_directories(../Flapjack)

target_precompile_headers(Flapjack PRIVATE pch.h)

target_link_libraries(Flapjack glfw)