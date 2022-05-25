#pragma once

#include "FlapjackUtil.h"
#include "pch.h"
#include "Events.h"

#define FLAPJACK_FRAMERATE 60

namespace FJ
{
	class FLAPJACK_API FlapjackApp
	{
	public:
		FlapjackApp();
		void Run();
		virtual void OnUpdate();
		void SetKeyPressedCallBack( std::function<void(const KeyPressedEvent &)> keyPressedCallback );
		void SetKeyReleasedCallBack( std::function<void(const KeyReleasedEvent &)> keyReleasedCallback );

	private:
		std::chrono::milliseconds mFrameDuration{ 1000 / FLAPJACK_FRAMERATE };
		std::chrono::steady_clock::time_point mNextFrameTime;
	};

}

