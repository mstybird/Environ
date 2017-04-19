#include"__Float.hxx"
namespace Environ {

	Environ::Float3::Float3():
		$(new __Float3),
		x($->RefX()),
		y($->RefY()),
		z($->RefZ())
	{
	}

	Environ::Float3::~Float3()
	{
	}

	Float3 & Float3::Add(const float aX, const float aY, const float aZ)
	{
		$->Add(aX, aY, aZ);
		return *this;
	}
}