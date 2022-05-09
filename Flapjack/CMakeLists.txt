set(HEADER_FILES
	Flapjack.h
	FlapjackApp.h
	FlapjackUtil.h
	GameWindow.h
	WindowImplementation.h
	specificGLFW/GlfwWindow.h
	specificOpenGL/OpenGLRenderer.h
	specificOpenGL/OpenGLShader.h
	specificOpenGL/OpenGLSprite.h
	Renderer.h
	RendererImplementation.h
	Shader.h
	ShaderImplementation.h
	Sprite.h
	SpriteImplementation.h
	)

set(SOURCE_FILES
	FlapjackApp.cpp
	GameWindow.cpp
	specificGLFW/GlfwWindow.cpp
	specificOpenGL/OpenGLRenderer.cpp
	specificOpenGL/OpenGLShader.cpp
	specificOpenGL/OpenGLSprite.cpp
	Renderer.cpp
	Shader.cpp
	Sprite.cpp
	)

add_library(Flapjack SHARED ${HEADER_FILES} ${SOURCE_FILES})


add_definitions(-DFLAPJACK_LIB)
add_definitions(-DFLAPJACK_DEBUG)
add_definitions(-DFLAPJACK_OPENGL)

include_directories(../glfw/include)
include_directories(../Flapjack)
include_directories(../stbi)
include_directories(../glad/include)

target_precompile_headers(Flapjack PRIVATE pch.h)

target_link_libraries(Flapjack glfw glad stbi)