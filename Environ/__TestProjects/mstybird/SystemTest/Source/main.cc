#include "System/Scene.hpp"
#include <System/CoreSystem.hpp>
#include<System/Scene.hpp>


bool Environ::CoreSystem::SetupWizard() {
	int ID = Window::Create("Sample", 100, 100, 300, 300);
	int width = Window::GetClientWidth(ID);
	return true;
}