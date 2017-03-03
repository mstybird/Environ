#include <System\Window.hpp>
#include <System\CoreSystem.hpp>
#include<Configure/Memory.hpp>

#include "__Window.hpp"

#include <wx\wx.h>

int Environ::Window::Create(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight)
{

	auto lScene = new __Window(aWindowTitle, aPositionX, aPositionY, aWidth, aHeight);
	if (!lScene)return 0;

	//�E�B���h�E����ID��Ԃ�
	return lScene->GetId();

}

int Environ::Window::GetClientWidth(const int aWindowId)
{
	auto lWindow = wxWindow::FindWindowById(aWindowId);
	//�E�B���h�E�����݂��Ă���΃N���C�A���g�T�C�Y(��)��Ԃ��B
	if (lWindow) {
		return lWindow->GetClientSize().GetWidth();
	}
	return 0;
}
