#include "pch.h"

#include "FlapjackApp.h"
#include "GameWindow.h"


namespace FJ
{
	void FlapjackApp::Run()
	{
		FLAPJACK_LOG("Flapjack running...")

		FJ::GameWindow::Init();
		
		

		FJ::GameWindow::GetWindow()->CreateWindow(800, 600, "Boom");


		while (true)
		{
			OnUpdate();

			FJ::GameWindow::GetWindow()->SwapBuffers();
			FJ::GameWindow::GetWindow()->CollectEvents();
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
}