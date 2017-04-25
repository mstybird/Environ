#include"__Float3.hxx"

namespace Environ {



	Float3::__Float3::__Float3() :
		DirectX::SimpleMath::Vector3()
	{
	}

	Float3::__Float3::__Float3(float aXYZ) :
		DirectX::SimpleMath::Vector3(aXYZ)
	{
	}

	Float3::__Float3::__Float3(float aX, float aY, float aZ) :
		DirectX::SimpleMath::Vector3(aX,aY,aZ)
	{
	}

	Float3::__Float3::~__Float3()
	{
	}

	void Float3::__Float3::operator+=(__Float3 aValue)
	{
		DirectX::SimpleMath::Vector3::operator+=(aValue);
	}

	void Float3::__Float3::operator+=(float aValue)
	{
		x += aValue;
		y += aValue;
		z += aValue;
	}

	void Float3::__Float3::operator-=(__Float3 aValue)
	{
		DirectX::SimpleMath::Vector3::operator-=(aValue);
	}

	void Float3::__Float3::operator-=(float aValue)
	{
		x -= aValue;
		y -= aValue;
		z -= aValue;
	}

	void Environ::Float3::__Float3::operator*=(__Float3 aValue)
	{
		DirectX::SimpleMath::Vector3::operator*=(aValue);
	}

	void Float3::__Float3::operator*=(float aValue)
	{
		x *= aValue;
		y *= aValue;
		z *= aValue;
	}

	void Float3::__Float3::operator/=(__Float3 aValue)
	{
		x /= aValue.x;
		y /= aValue.y;
		z /= aValue.z;
	}

	void Float3::__Float3::operator/=(float aValue)
	{
		x /= aValue;
		y /= aValue;
		z /= aValue;
	}

	float & Float3::__Float3::RefX()
	{
		return x;
	}

	float & Float3::__Float3::RefY()
	{
		return y;
	}

	float & Float3::__Float3::RefZ()
	{
		return z;
	}



}



