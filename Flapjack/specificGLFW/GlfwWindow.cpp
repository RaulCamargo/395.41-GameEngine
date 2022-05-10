#include "pch.h"

#include <glad/glad.h>
#include "GlfwWindow.h"
#include "FlapjackUtil.h"

namespace FJ
{
	GlfwWindow::GlfwWindow()
	{
		{
			if (!glfwInit())
				FLAPJACK_LOG("Error: GLFW failed to initialize.");
		}
	}
	bool GlfwWindow::CreateWindow(int width, int height, const std::string& windowName)
	{
		mGLFWwindow = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL); // c_str() makes C++ string useable by C

		if (mGLFWwindow == nullptr)
		{
			FLAPJACK_LOG("Error: Window creation failed.");
			return false;
		}

		glfwMakeContextCurrent(mGLFWwindow);
		glfwSwapInterval(1);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
			FLAPJACK_LOG("ERROR: GLAD failed to initialize!");

		glfwSetWindowUserPointer(mGLFWwindow, &mCallbacks);

		glfwSetKeyCallback(mGLFWwindow, [](GLFWwindow* window, int key, int scancode, int action, int mods)
			{
				if (action == GLFW_PRESS || action == GLFW_REPEAT)
				{
					Callbacks* userPointer{ (Callbacks*)glfwGetWindowUserPointer(window) };

					KeyPressedEvent event{ key };
					userPointer->keyPressedCallback(event);
				}
				else if(action == GLFW_RELEASE)
				{
					Callbacks* userPointer{ (Callbacks*)glfwGetWindowUserPointer(window) };

					KeyReleasedEvent event{ key };
					userPointer->keyReleasedCallback(event);
				}
			}
		);

		return true;
	}

	void GlfwWindow::SwapBuffers()
	{
		glfwSwapBuffers(mGLFWwindow);
	}

	void GlfwWindow::CollectEvents()
	{
		glfwPollEvents();
	}

	int GlfwWindow::GetWidth() const
	{
		int width, height;
		glfwGetWindowSize(mGLFWwindow, &width, &height); // & in this usage is C "address of" not C++ reference.

		return width;
	}

	int GlfwWindow::GetHeight() const
	{
		int width, height;
		glfwGetWindowSize(mGLFWwindow, &width, &height); // & in this usage is C "address of" not C++ reference.

		return height;
	}
	
	GlfwWindow::~GlfwWindow()
	{
		if (mGLFWwindow != nullptr)
			glfwDestroyWindow(mGLFWwindow);

		glfwTerminate();
	}

	void GlfwWindow::SetKeyPressedCallback(std::function<void(const KeyPressedEvent&)> keyPressedCallback)
	{
		mCallbacks.keyPressedCallback = keyPressedCallback;	
	}

	void GlfwWindow::SetKeyReleasedCallback(std::function<void(const KeyReleasedEvent&)> keyReleasedCallback)
	{
		mCallbacks.keyReleasedCallback = keyReleasedCallback;
	}

}