#include<Math\Arithmetic\Vector3.hpp>

namespace Environ {

	Environ::Vector3::Vector3():
		Float3()
	{
	}

	Environ::Vector3::Vector3(const Float3 & aValue):Float3(aValue.x, aValue.y, aValue.z)
	{
	}

	//Vector3& Vector3::operator=(const Vector3&aValue) {
	//	this->x = aValue.x;
	//	this->y = aValue.y;
	//	this->z = aValue.z;
	//	return *this;
	//}

	Vector3 & Environ::Vector3::operator+=(const Float3 & aValue)
	{
		this->x += aValue.x;
		this->y += aValue.y;
		this->z += aValue.z;
		return *this;
	}

}