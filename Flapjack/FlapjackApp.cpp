#include "pch.h"
#include "glad/glad.h"
#include "FlapjackApp.h"
#include "GameWindow.h"
#include "Sprite.h"
#include "Shader.h"
#include "Renderer.h"


namespace FJ
{
	void FlapjackApp::Run()
	{
		FLAPJACK_LOG("Flapjack running...")

		FJ::GameWindow::Init();
		
		FJ::GameWindow::GetWindow()->CreateWindow(800, 600, "Boom");

		Renderer::Init();

		FJ::Sprite star{ "../Flapjack/Assets/Images/Star.png" };

		while (true)
		{
			OnUpdate();

			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			Renderer::Draw(star, 50, 20, 1);

			FJ::GameWindow::GetWindow()->SwapBuffers();
			FJ::GameWindow::GetWindow()->CollectEvents();
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
}