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
	void FlapjackApp::Run()
	{
		FLAPJACK_LOG("Flapjack running...")

		FJ::GameWindow::Init();
		
		FJ::GameWindow::GetWindow()->CreateWindow(800, 600, "Boom");

		Renderer::Init();

		FJ::Sprite star{ "../Flapjack/Assets/Images/Star.png" };

		int xPos{ -star.GetWidth() };

		mNextFrameTime = std::chrono::steady_clock::now() + mFrameDuration;

		int x{ 50 }, y{ 50 };
		auto keyCall = [&x](const KeyPressedEvent& event) 
		{
			if (event.GetKeyCode() == FLAPJACK_KEY_LEFT) x -= 5;
			else if (event.GetKeyCode() == FLAPJACK_KEY_RIGHT) x += 5;
		};
		auto keyReleased = [](const KeyReleasedEvent& event) {FLAPJACK_LOG(event.GetKeyCode()); };
		
		SetKeyPressedCallBack(keyCall);
		//SetKeyReleasedCallBack(keyReleased);


		while (true)
		{
			OnUpdate();

			Renderer::ClearScreen();

			Renderer::Draw(star, x, y, 1);

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