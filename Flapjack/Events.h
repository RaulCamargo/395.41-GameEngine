#pragma once

#include "FlapjackUtil.h"

namespace FJ
{
	class FLAPJACK_API KeyPressedEvent
	{
	public:
		KeyPressedEvent(int codeOfKey);
		KeyPressedEvent() = delete;

		int GetKeyCode() const;

	private:
		int mKeyCode;
	};

	class FLAPJACK_API KeyReleasedEvent
	{
	public:
		KeyReleasedEvent(int codeOfKey);
		KeyReleasedEvent() = delete;

		int GetKeyCode() const;

	private:
		int mKeyCode;
	};

}