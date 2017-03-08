#include"Configure\Integration.hh"

#include<System/Window.hpp>
#include <System/EntryPoint.hpp>
#include <Type\Numeric.hpp>
#include <string>

bool Environ::SetupWizard() {

	Environ::Window::Create("Sample", 100, 100, 300, 300);
	return true;
}


