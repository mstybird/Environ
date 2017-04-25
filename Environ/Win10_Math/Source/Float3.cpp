#include"__Float3.hxx"
namespace Environ {

	Environ::Float3::Float3():
		x($->RefX()),
		y($->RefY()),
		z($->RefZ())
	{
		$ = std::make_unique<__Float3>();
	}

	Environ::Float3::Float3(float aX):
		Float3()
	{
		$ = std::make_unique<__Float3>(aX);
	}

	Environ::Float3::Float3(float aX, float aY, float aZ) :
		Float3()
	{
		$ = std::make_unique<__Float3>(aX, aY, aZ);
	}

	Environ::Float3::Float3(const Float3 & aV):
		Float3()
	{
		$ = std::make_unique<__Float3>(*aV.$);
	}

	Environ::Float3::~Float3()
	{
	}

	bool Float3::operator==(const Float3 & aValue) const
	{
		return false;
	}

	bool Float3::operator!=(const Float3 & aValue) const
	{
		return false;
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
		(*$) += (*aValue.$);
		return *this;
	}

	Float3 & Environ::Float3::operator+=(float aValue)
	{
		(*$) += aValue;
		return *this;
	}

	Float3 & Environ::Float3::operator-=(const Float3 & aValue)
	{
		(*$) -= (*aValue.$);
		return *this;
	}

	Float3 & Environ::Float3::operator-=(float aValue)
	{
		(*$) -= aValue;
		
		return *this;
	}

	Float3 & Environ::Float3::operator*=(const Float3 & aValue)
	{
		(*$) *= (*aValue.$);
		return *this;
	}

	Float3 & Environ::Float3::operator*=(float aValue)
	{
		(*$) *= aValue;
		return *this;
	}

	Float3 & Environ::Float3::operator/=(const Float3 & aValue)
	{
		(*$) /= (*aValue.$);
		return *this;
	}

	Float3 & Environ::Float3::operator/=(float aValue)
	{
		(*$) /= aValue;
		return *this;
	}

	Float3 Environ::Float3::operator+(Float3 aValue) const
	{
		return aValue += *this;
	}

	Float3 Environ::Float3::operator+(float aValue) const
	{
		Float3 lResult(*this);
		lResult += aValue;
		return lResult;
	}

	Float3 Environ::Float3::operator-(Float3 aValue) const
	{
		return aValue -= *this;
	}

	Float3 Environ::Float3::operator-(float aValue) const
	{
		Float3 lResult(*this);
		lResult -= aValue;
		return lResult;
	}

	Float3 Environ::Float3::operator*(Float3 aValue) const
	{
		return aValue *= *this;
	}

	Float3 Environ::Float3::operator*(float aValue) const
	{
		Float3 lResult(*this);
		lResult *= aValue;
		return lResult;
	}

	Float3 Environ::Float3::operator/(Float3 aValue) const
	{
		return aValue /= *this;
	}

	Float3 Environ::Float3::operator/(float aValue) const
	{
		Float3 lResult(*this);
		lResult /= aValue;
		return lResult;
	}

}