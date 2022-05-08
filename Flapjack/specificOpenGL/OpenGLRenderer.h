#pragma once

#include "RendererImplementation.h"

namespace FJ
{
	class OpenGLRenderer : public RendererImplementation
	{
		virtual void Draw(FJ::Sprite& picture, int xPos, int yPos, int zPos, FJ::Shader shader) override;
	};
}