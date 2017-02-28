#pragma once
#include <System\Scene.hpp>
#include <wx\wx.h>

namespace Environ {
	//wxFrameを継承する親となるウィンドウ(アプリ実装側はあまり触らない)
	class Window::__Window :public wxFrame{
	public:
		__Window(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);
		virtual ~__Window();

	private:
	};
	
}