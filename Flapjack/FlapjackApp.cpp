#include "pch.h"
#include "glad/glad.h"
#include "FlapjackApp.h"
#include "GameWindow.h"
#include "Sprite.h"


namespace FJ
{
	void FlapjackApp::Run()
	{
		FLAPJACK_LOG("Flapjack running...")

		FJ::GameWindow::Init();
		
		FJ::GameWindow::GetWindow()->CreateWindow(800, 600, "Boom");

		// SHADERS

		const char* vertexShader = R"(
			#version 330 core
			layout (location = 0) in vec2 rawCoords;
			layout (location = 1) in vec2 tCoordInput;
			
			out vec2 TexturePoints;

			void main()
			{
				gl_Position = vec4(rawCoords.x, rawCoords.y, 0.0f, 1.0f);
				TexturePoints = tCoordInput;
			}
		)";

		const char* fragmentShader = R"(
			#version 330 core
			out vec4 FragColor;

			in vec2 TexturePoints;

			uniform sampler2D picture;

			void main()
			{
				FragColor = texture(picture, TexturePoints);
			}
		)";

		unsigned int vertexProg = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexProg, 1, &vertexShader, NULL);
		glCompileShader(vertexProg);

		// check for shader compile errors
		int success;
		char infoLog[512];
		glGetShaderiv(vertexProg, GL_COMPILE_STATUS, &success);
		if (!success)
		{
			glGetShaderInfoLog(vertexProg, 512, NULL, infoLog);
			std::cout << "ERROR::SHADER::VERTEX::COMPILATION::FAILED\n" << infoLog << std::endl;
		}

		// fragment shader
		unsigned int fragmentProg = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentProg, 1, &fragmentShader, NULL);
		glCompileShader(fragmentProg);

		// check for shader compile errors
		glGetShaderiv(fragmentProg, GL_COMPILE_STATUS, &success);
		if (!success)
		{
			glGetShaderInfoLog(fragmentProg, 512, NULL, infoLog);
			std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION::FAILED\n" << infoLog << std::endl;
		}

		// link shaders
		unsigned int shaderProgram = glCreateProgram();
		glAttachShader(shaderProgram, vertexProg);
		glAttachShader(shaderProgram, fragmentProg);
		glLinkProgram(shaderProgram);

		// check for linking errors
		glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
		if (!success)
		{
			glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
			std::cout << "ERROR::SHADER::PROGRAM::LINKING::FAILED\n" << infoLog << std::endl;
		}
		glDeleteShader(vertexProg);
		glDeleteShader(fragmentProg);

		FJ::Sprite star("../Flapjack/Assets/Star.png");

		while (true)
		{
			OnUpdate();

			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			glUseProgram(shaderProgram);
			star.Bind();
			glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

			FJ::GameWindow::GetWindow()->SwapBuffers();
			FJ::GameWindow::GetWindow()->CollectEvents();
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
}