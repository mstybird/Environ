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

	Environ::Float3::Float3(float aX, float aY, float aZ) :
		$(new __Float3),
		x($->RefX()),
		y($->RefY()),
		z($->RefZ())
	{
		x = aX;
		y = aY;
		z = aZ;
	}

	Float3 & Environ::Float3::operator=(const Float3 & aValue)
	{
		this->x = aValue.x;
		this->y = aValue.y;
		this->z = aValue.z;
		return *this;
	}

	Float3 & Environ::Float3::operator+=(const Float3 & aValue)
	{
		this->x += aValue.x;
		this->y += aValue.y;
		this->z += aValue.z;
		return *this;
	}



}