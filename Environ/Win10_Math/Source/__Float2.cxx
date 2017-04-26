#include"__Float2.hxx"

namespace Environ {
	void Float2::__Float2::operator+=(__Float2 aValue)
	{
		DirectX::SimpleMath::Vector2::operator+=(aValue);
	}

	void Float2::__Float2::operator+=(float aValue)
	{
		x += aValue;
		y += aValue;
	}

	void Float2::__Float2::operator-=(__Float2 aValue)
	{
		DirectX::SimpleMath::Vector2::operator-=(aValue);
	}

	void Float2::__Float2::operator-=(float aValue)
	{
		x -= aValue;
		y -= aValue;
	}

	void Environ::Float2::__Float2::operator*=(__Float2 aValue)
	{
		DirectX::SimpleMath::Vector2::operator*=(aValue);
	}

	void Float2::__Float2::operator*=(float aValue)
	{
		x *= aValue;
		y *= aValue;
	}

	void Float2::__Float2::operator/=(__Float2 aValue)
	{
		x /= aValue.x;
		y /= aValue.y;
	}

	void Float2::__Float2::operator/=(float aValue)
	{
		x /= aValue;
		y /= aValue;
	}

	float & Float2::__Float2::RefX()
	{
		return x;
	}

	float & Float2::__Float2::RefY()
	{
		return y;
	}

	Float2::__Float2::__Float2() {

	}

	Float2::__Float2::__Float2(float aXY) :
		DirectX::SimpleMath::Vector2(aXY) {

	}

	Float2::__Float2::__Float2(float aX, float aY) :
		DirectX::SimpleMath::Vector2(aX, aY){

	}

	Float2::__Float2::~__Float2()
	{
	}

}



