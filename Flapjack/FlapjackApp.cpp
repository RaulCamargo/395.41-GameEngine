#include "pch.h"

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

		int xPos{ -star.GetWidth() };

		mNextFrameTime = std::chrono::steady_clock::now() + mFrameDuration;

		while (true)
		{
			OnUpdate();

			Renderer::ClearScreen();

			Renderer::Draw(star, xPos, 20, 1);

			xPos = (xPos + 5);

			std::this_thread::sleep_until(mNextFrameTime);

			FJ::GameWindow::GetWindow()->SwapBuffers();
			FJ::GameWindow::GetWindow()->CollectEvents();

			mNextFrameTime += mFrameDuration;
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
}