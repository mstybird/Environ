#pragma once
#include <System\Scene.hpp>
#include <wx\wx.h>

namespace Environ {
	//wxFrame���p������e�ƂȂ�E�B���h�E(�A�v���������͂��܂�G��Ȃ�)
	class Window::__Window :public wxFrame{
	public:
		__Window(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);
		virtual ~__Window();

	private:
	};
	
}