#include "pch.h"
#include "Renderer.h"
#include "GameWindow.h"
#include "specificOpenGL/OpenGLRenderer.h"

namespace FJ
{
    void Renderer::Init()
    {
        if(mInstance == nullptr)
            mInstance = new Renderer;
    }

    void Renderer::Draw(FJ::Sprite& picture, int xPos, int yPos, int zPos)
    {
        assert(mInstance != nullptr);
        
        mInstance->mImplementation->Draw(picture, xPos, yPos, zPos, mInstance->mShader);
    }

    Renderer::Renderer() : 
        mShader("../Flapjack/Assets/Shaders/defaultVertex.glsl", "../Flapjack/Assets/Shaders/defaultFragment.glsl")
    {
#ifdef FLAPJACK_OPENGL
        mImplementation = new OpenGLRenderer;
#else
        #Only_OpenGL_is_supported_for_now
#endif

    }
}
