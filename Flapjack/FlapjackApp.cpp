#include "pch.h"

#include "FlapjackApp.h"

namespace FJ
{
	void FlapjackApp::Run()
	{
		FLAPJACK_LOG("Flapjack running...")
		while (true)
		{
			OnUpdate();
		}
	}
	void FlapjackApp::OnUpdate()
	{

	}
}