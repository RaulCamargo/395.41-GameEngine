#pragma once

#include "SpriteImplementation.h"
#include "FlapjackUtil.h"

namespace FJ
{
	class FLAPJACK_API Sprite
	{
	public:
		Sprite(const std::string& filename);

		int GetWidth() const;
		int GetHeight() const;

		void Bind();

	private:
		SpriteImplementation* mImplementation;
	};
}


