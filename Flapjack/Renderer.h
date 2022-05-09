#pragma once

#include "Sprite.h"
#include "Shader.h"
#include "RendererImplementation.h"
#include "FlapjackUtil.h"
namespace FJ
{
	class FLAPJACK_API Renderer
	{
	public:
		static void Init();
		static void Draw(FJ::Sprite& picture, int xPos, int yPos, int zPos);
		static void ClearScreen();

	private:
		inline static Renderer* mInstance{ nullptr };
		RendererImplementation* mImplementation{ nullptr };

		Renderer();

		FJ::Shader mShader;
	};
}
