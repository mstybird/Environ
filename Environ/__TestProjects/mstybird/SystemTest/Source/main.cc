#include"Configure\Integration.hh"
#include<System/Window.hpp>
#include<Frame\Frame.hpp>
#include <System/EntryPoint.hpp>
#include<Math\Arithmetic\Float3.hpp>
#include<Math\Arithmetic\Vector3.hpp>

#include <string>

bool Environ::SetupWizard() {

	int id= Environ::Window::Create("Sample", 100, 100, 300, 300);
	Float3 f;
	Vector3 v;
	Vector3 v2;
	f += {1, 2, 3};
	v += {3, 2, 1};
	v = f;
	v += v;



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


