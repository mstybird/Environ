#include<PreCompiled.hpp>

#include<System/Window.hpp>
#include <System/EntryPoint.hpp>

bool Environ::SetupWizard() {

	Environ::Window::Create("Sample", 100, 100, 300, 300);
	std::vector<int>v;
	return true;
}


