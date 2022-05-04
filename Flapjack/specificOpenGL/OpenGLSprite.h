#pragma once

#include "SpriteImplementation.h"

namespace FJ
{
	class OpenGLSprite : public SpriteImplementation
	{
	public:
		OpenGLSprite(const std::string& file);
		int GetWidth() const override;
		int GetHeight() const override;
		void Bind() override;
		bool IsBound() const override;

	private:
		unsigned int mVBO;
		unsigned int mVAO;
		unsigned int mEBO;
		unsigned int mTex;
		int mWidth{ 0 };
		int mHeight{ 0 };
	};

}

