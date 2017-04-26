#include "..\..\GameEngine\Header\Math\Arithmetic\Float2.hpp"
#include"__Float2.hxx"
namespace Environ {

	Environ::Float2::Float2():
		x($->RefX()),
		y($->RefY())
	{
		$ = std::make_unique<__Float2>();
	}

	Environ::Float2::Float2(float aX):
		Float2()
	{
		*$ = { aX };
	}

	Environ::Float2::Float2(float aX, float aY) :
		Float2()
	{
		*$ = { aX,aY };
	}

	Float2::Float2(const Float2 & aV):
		Float2()
	{
		*$ = *aV.$;
	}


	Environ::Float2::~Float2()
	{
	}

	bool Float2::operator==(const Float2 & aValue) const
	{
		return *this->$ == *aValue.$;
	}

	bool Float2::operator!=(const Float2 & aValue) const
	{
		return !(*this->$ == *aValue.$);
	}



	Float2 & Environ::Float2::operator=(const Float2 & aValue)
	{
		this->x = aValue.x;
		this->y = aValue.y;
		return *this;
	}

	Float2 & Environ::Float2::operator+=(const Float2 & aValue)
	{
		(*$) += (*aValue.$);
		return *this;
	}

	Float2 & Environ::Float2::operator+=(float aValue)
	{
		(*$) += aValue;
		return *this;
	}

	Float2 & Environ::Float2::operator-=(const Float2 & aValue)
	{
		(*$) -= (*aValue.$);
		return *this;
	}

	Float2 & Environ::Float2::operator-=(float aValue)
	{
		(*$) -= aValue;
		
		return *this;
	}

	Float2 & Environ::Float2::operator*=(const Float2 & aValue)
	{
		(*$) *= (*aValue.$);
		return *this;
	}

	Float2 & Environ::Float2::operator*=(float aValue)
	{
		(*$) *= aValue;
		return *this;
	}

	Float2 & Environ::Float2::operator/=(const Float2 & aValue)
	{
		(*$) /= (*aValue.$);
		return *this;
	}

	Float2 & Environ::Float2::operator/=(float aValue)
	{
		(*$) /= aValue;
		return *this;
	}

	Float2 Environ::Float2::operator+(Float2 aValue) const
	{
		return aValue += *this;
	}

	Float2 Environ::Float2::operator+(float aValue) const
	{
		Float2 lResult(*this);
		lResult += aValue;
		return lResult;
	}

	Float2 Environ::Float2::operator-(Float2 aValue) const
	{
		return aValue -= *this;
	}

	Float2 Environ::Float2::operator-(float aValue) const
	{
		Float2 lResult(*this);
		lResult -= aValue;
		return lResult;
	}

	Float2 Environ::Float2::operator*(Float2 aValue) const
	{
		return aValue *= *this;
	}

	Float2 Environ::Float2::operator*(float aValue) const
	{
		Float2 lResult(*this);
		lResult *= aValue;
		return lResult;
	}

	Float2 Environ::Float2::operator/(Float2 aValue) const
	{
		return aValue /= *this;
	}

	Float2 Environ::Float2::operator/(float aValue) const
	{
		Float2 lResult(*this);
		lResult /= aValue;
		return lResult;
	}

}