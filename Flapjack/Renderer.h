#pragma once

#include "Sprite.h"
#include "Shader.h"
#include "RendererImplementation.h"

namespace FJ
{
	class Renderer
	{
	public:
		static void Init();
		static void Draw(FJ::Sprite& picture, int xPos, int yPos, int zPos);

	private:
		inline static Renderer* mInstance{ nullptr };
		RendererImplementation* mImplementation{ nullptr };

		Renderer();

		FJ::Shader mShader;
	};
}
