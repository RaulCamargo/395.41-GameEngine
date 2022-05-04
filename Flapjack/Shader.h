#pragma once

#include "FlapjackUtil.h"
#include "ShaderImplementation.h"

namespace FJ
{
	class FLAPJACK_API Shader
	{
	public:
		
		
		void Bind();
	private:
		ShaderImplementation* mImplementation;

	};
}
