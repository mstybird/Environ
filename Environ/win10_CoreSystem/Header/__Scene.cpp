#include "__Scene.hpp"
#include "wx\app.h"
#include "..\..\GameEngine\Header\System\CoreSystem.hpp"
#include "__CoreSystem.hxx"

Environ::Window::__Window::__Window(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight):
	wxFrame(nullptr, wxWindow::NewControlId(), aWindowTitle, { aPositionX,aPositionY }, { aWidth, aHeight })
{
	Show(true);
}

Environ::Window::__Window::~__Window()
{
}


