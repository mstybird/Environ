#include"Configure\Integration.hh"
#include<System/Window.hpp>
#include<Frame\Frame.hpp>
#include <System/EntryPoint.hpp>
#include<Math\Arithmetic\Float3.hpp>

#include <string>

bool Environ::SetupWizard() {

	int id= Environ::Window::Create("Sample", 100, 100, 300, 300);
	Float3 f;
	f.Add(3, 4, 5);
	float q = 555;
	float& fa = q;

	f.x = fa;
	f.Add(5, 0, 0);
	Environ::Frame::Create(id, 10, 20, 100, 100, "Frame");
	
	//Float f;
//	f = 10.0f;
	//auto v = f.max;
	//auto v2 = Float::min;
	//Int i;
	//i = 10;

	//Win10GUIのコーディング

	return true;
}


