#include "pch.h"
#include "GlfwWindow.h"
#include "FlapjackUtil.h"

namespace FJ
{
	GlfwWindow::GlfwWindow()
	{
		if (!glfwInit())
			FLAPJACK_LOG("Error: GLFW failed to initialize.");
	}
	
	bool GlfwWindow::CreateWindow(int width, int height, const std::string& windowName)
	{
		mGlfwWindow = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL); // c_str() makes C++ string useable by C

		if (mGlfwWindow == nullptr)
		{
			FLAPJACK_LOG("Error: Window creation failed.");
			return false;
		}

		glfwMakeContextCurrent(mGlfwWindow);

		return true;
	}

	void GlfwWindow::SwapBuffers()
	{
		glfwSwapBuffers(mGlfwWindow);
	}

	void GlfwWindow::CollectEvents()
	{
		glfwPollEvents();
	}

	int GlfwWindow::GetWidth() const
	{
		int width, height;
		glfwGetWindowSize(mGlfwWindow, &width, &height); // & in this usage is C "address of" not C++ reference.

		return width;
	}

	int GlfwWindow::GetHeight() const
	{
		int width, height;
		glfwGetWindowSize(mGlfwWindow, &width, &height); // & in this usage is C "address of" not C++ reference.

		return height;
	}
	
	GlfwWindow::~GlfwWindow()
	{
		if (mGlfwWindow != nullptr)
			glfwDestroyWindow(mGlfwWindow);

		glfwTerminate();
	}

}