#include"__Float.hxx"

namespace Environ {
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


	Float3::__Float3::~__Float3()
	{
	}

}



