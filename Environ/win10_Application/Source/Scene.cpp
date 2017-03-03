#include "..\..\GameEngine\Header\System\Scene.hpp"
#include "..\..\GameEngine\Header\System\Scene.hpp"
#include "System\Scene.hpp"
#include "__Scene.hpp"
#include "..\..\GameEngine\Header\System\CoreSystem.hpp"
#include <wx\wx.h>
#include<Configure/Memory.hpp>
int Environ::Window::Create(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight)
{

	auto lScene = new __Window(aWindowTitle, aPositionX, aPositionY, aWidth, aHeight);
	if (!lScene)return 0;

	//ウィンドウ識別IDを返す
	return lScene->GetId();

}

int Environ::Window::GetClientWidth(const int aWindowId)
{
	auto lWindow = wxWindow::FindWindowById(aWindowId);
	//ウィンドウが存在していればクライアントサイズ(幅)を返す。
	if (lWindow) {
		return lWindow->GetClientSize().GetWidth();
	}
	return 0;
}
