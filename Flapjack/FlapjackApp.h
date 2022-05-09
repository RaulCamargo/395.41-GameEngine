#pragma once

#include "FlapjackUtil.h"
#include "pch.h"

#define FLAPJACK_FRAMERATE 60

namespace FJ
{
	class FLAPJACK_API FlapjackApp
	{
	public:
		void Run();
		virtual void OnUpdate();

	private:
		std::chrono::milliseconds mFrameDuration{ 1000 / FLAPJACK_FRAMERATE };
		std::chrono::steady_clock::time_point mNextFrameTime;
	};

}

