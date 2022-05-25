#include "pch.h"

#include "FlapjackApp.h"
#include "GameWindow.h"

#include "Sprite.h"
#include "Shader.h"
#include "Renderer.h"
#include "Events.h"
#include "KeyCodes.h"

namespace FJ
{
	FlapjackApp::FlapjackApp()
	{
		FLAPJACK_LOG("Flapjack running...");

		FJ::GameWindow::Init();

		FJ::GameWindow::GetWindow()->CreateWindow(2500, 2500, "Boom");

		Renderer::Init();
	}

	void FlapjackApp::Run()
	{
		mNextFrameTime = std::chrono::steady_clock::now() + mFrameDuration;

		while (true)
		{
			Renderer::ClearScreen();
			
			OnUpdate();
			
			std::this_thread::sleep_until(mNextFrameTime);

			FJ::GameWindow::GetWindow()->SwapBuffers();
			FJ::GameWindow::GetWindow()->CollectEvents();

			mNextFrameTime += mFrameDuration;
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
	
	void FlapjackApp::SetKeyPressedCallBack( std::function<void(const KeyPressedEvent&)> keyPressedCallback)
	{
		GameWindow::GetWindow()->SetKeyPressedCallback(keyPressedCallback);
	}
	
	void FlapjackApp::SetKeyReleasedCallBack(std::function<void(const KeyReleasedEvent&)> keyReleasedCallback)
	{
		GameWindow::GetWindow()->SetKeyReleasedCallback(keyReleasedCallback);
	}
}