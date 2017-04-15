#include"Configure\Integration.hh"
#include"Type/Type.hpp"
#include<System/Window.hpp>
#include<Frame\Frame.hpp>
#include <System/EntryPoint.hpp>


#include <string>

bool Environ::SetupWizard() {

	Int id= Environ::Window::Create("Sample", 100, 100, 300, 300);

	Environ::Frame::Create(id, 10, 20, 100, 200, "Frame");
	
	//Float f;
//	f = 10.0f;
	//auto v = f.max;
	//auto v2 = Float::min;
	//Int i;
	//i = 10;

	//Win10GUIのコーディング

	return true;
}


