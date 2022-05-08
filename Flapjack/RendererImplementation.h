#pragma once

#include "Sprite.h"
#include "Shader.h"

namespace FJ
{
	class RendererImplementation
	{
	public:
		virtual void Draw(FJ::Sprite& picture, int xPos, int yPos, int zPos, FJ::Shader shader) = 0;
	};
}