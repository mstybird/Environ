#include"__Float.hxx"

Environ::Float3::__Float3::__Float3():mValue(0.1f,0.2f,0.3f)
{}

Environ::Float3::__Float3::~__Float3()
{
}

void Environ::Float3::__Float3::Add(const float aX, const float aY, const float aZ)
{
	mValue.x = aX;
	mValue.y = aY;
	mValue.z = aZ;
}

float & Environ::Float3::__Float3::RefX()
{
	return mValue.x;
}

float & Environ::Float3::__Float3::RefY()
{
	return mValue.y;
}

float & Environ::Float3::__Float3::RefZ()
{
	return mValue.z;
}
