#pragma once

#include "FlapjackUtil.h"
#include "ShaderImplementation.h"

namespace FJ
{
	class FLAPJACK_API Shader
	{
	public:
		Shader(const std::string& vertexFile, const std::string& fragmentFile);
		void SetUniform3Ints(const std::string& uniformName, int val1, int val2, int val3 );
		void SetUniform2Ints(const std::string& uniformName, int val1, int val2 );
		void Bind();

	private:
		ShaderImplementation* mImplementation;
	};
}
