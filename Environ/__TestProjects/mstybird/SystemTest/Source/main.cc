#include"Configure\Integration.hh"

#include<System/Window.hpp>
#include <System/EntryPoint.hpp>
#include <Type\Numeric.hpp>


#include <string>

bool Environ::SetupWizard() {

	Environ::Window::Create("Sample", 100, 100, 300, 300);
	Numeric<int> in;
	//Float f;
//	f = 10.0f;
	//auto v = f.max;
	//auto v2 = Float::min;
	//Int i;
	//i = 10;

	return true;
}


