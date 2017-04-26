#include<Math\Arithmetic\Vector2.hpp>
#include"__Float2.hxx"
namespace Environ {

	//定数定義に使用
	const Vector2 Vector2Define(DirectX::SimpleMath::Vector2 aVec) {
		Vector2 lResult;
		lResult.x = aVec.x;
		lResult.y = aVec.y;
		return lResult;
	}

	//各種定数を定義(全て静的メンバ定数)
	const Vector2 Vector2::cZero = Vector2Define(DirectX::SimpleMath::Vector2::Zero);
	const Vector2 Vector2::cOne = Vector2Define(DirectX::SimpleMath::Vector2::One);
	const Vector2 Vector2::cUnitX = Vector2Define(DirectX::SimpleMath::Vector2::UnitX);
	const Vector2 Vector2::cUnitY = Vector2Define(DirectX::SimpleMath::Vector2::UnitY);

	//0初期化をする
	Environ::Vector2::Vector2():
		Float2()
	{
	}

	//指定した値で初期化する
	Environ::Vector2::Vector2(float aX, float aY) :
		Float2(aX,aY)
	{
	}

	//別のFloat2型で初期化する
	Environ::Vector2::Vector2(const Float2 & aValue):Float2(aValue.x, aValue.y)
	{
	}

	//処理なし
	Environ::Vector2::~Vector2()
	{
	}

	//代入処理
	Vector2 & Environ::Vector2::operator=(const Float2 & aValue)
	{
		Float2::operator=(aValue);
		return *this;
	}

	//Float2の加算処理
	Vector2 & Environ::Vector2::operator+=(const Float2 & aValue)
	{
		Float2::operator+=(aValue);
		return *this;
	}

	//指定値をxyz全てに加算する
	Vector2 & Environ::Vector2::operator+=(float aValue)
	{
		Float2::operator+=(aValue);
		return *this;
	}

	//Float2の加算処理
	Vector2 & Environ::Vector2::operator-=(const Float2 & aValue)
	{
		Float2::operator-=(aValue);
		return *this;
	}


	Vector2 & Environ::Vector2::operator-=(float aValue)
	{
		Float2::operator-=(aValue);
		return *this;
	}

	//Float2の加算処理
	Vector2 & Environ::Vector2::operator*=(const Float2 & aValue)
	{
		Float2::operator*=(aValue);
		return *this;
	}

	//Float2の加算処理
	Vector2 & Environ::Vector2::operator*=(float aValue)
	{
		Float2::operator*=(aValue);
		return *this;
	}


	//Float2の加算処理
	Vector2 & Environ::Vector2::operator/=(const Float2 & aValue)
	{
		Float2::operator/=(aValue);
		return *this;
	}

	//Float2の加算処理
	Vector2 & Environ::Vector2::operator/=(float aValue)
	{
		Float2::operator/(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator+(const Float2 & aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator+(float aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator-(const Float2 & aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator-(float aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator*(const Float2 & aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Vector2 Environ::Vector2::operator*(float aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Float2 Environ::Vector2::operator/(const Float2 & aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	Float2 Environ::Vector2::operator/(float aValue) const
	{
		Float2::operator+(aValue);
		return *this;
	}

	bool Environ::Vector2::IsClamp(const Vector2 & aMin, const Vector2 & aMax) const
	{
		//範囲チェック
		if (
			aMin.x <= this->x&&this->x <= aMax.x&&
			aMin.y <= this->y&&this->y <= aMax.y
			) {
			return true;
		}
		//範囲外なら偽
		return false;
	}

	float Vector2::Length()const {
		return $->Length();
	}


	Vector2& Vector2::Normalize() {
		$->Normalize();
		return *this;
	}


	Vector2& Vector2::Reflect(const Vector2& aNormal) {
		DirectX::SimpleMath::Vector2::Reflect(*this->$, *aNormal.$);
		return *this;
	}

	float Vector2::Dot(const Vector2& aRightVector)const {
		return $->Dot(*aRightVector.$);
	}

	Vector2 & Environ::Vector2::Cross(const Vector2 & aVector)
	{
		$->Cross(*aVector.$, *this->$);
		return *this;
	}

	Vector2 & Environ::Vector2::Clamp(const Vector2& aMin, const Vector2& aMax)
	{
		$->Clamp(*aMin.$, *aMax.$);
		return *this;
	}

	void Environ::Vector2::Normalize(const Vector2& aVector,Vector2 & aResult)
	{
		aVector.$->Normalize(*aResult.$);
	}

	
	void Environ::Vector2::Cross(const Vector2& aVectorLeft, const Vector2& aVectorRight, Vector2 & aResult)
	{
		aVectorLeft.$->Cross(*aVectorRight.$, *aResult.$);
	}

	void Environ::Vector2::Clamp(const Vector2& aVector,const Vector2 & aMin, const Vector2 & aMax, Vector2 & aResult)
	{
		aVector.$->Clamp(*aMin.$, *aMax.$, *aResult.$);
	}

	float Environ::Vector2::Dot(const Vector2 & aLeft, const Vector2 & aRight)
	{
		return aLeft.Dot(aRight);
	}

	void Vector2::Reflect(const Vector2& aInVector,const Vector2& aNormal, Vector2&aResult) {
		DirectX::SimpleMath::Vector2::Reflect(*aInVector.$, *aNormal.$, *aResult.$);
	}

	void Vector2::Min(const Vector2& aVec1, const Vector2& aVec2, Vector2& aResult) {
		DirectX::SimpleMath::Vector2::Min(*aVec1.$, *aVec2.$, *aResult.$);
	}

	void Vector2::Max(const Vector2& aVec1, const Vector2& aVec2, Vector2& aResult) {
		DirectX::SimpleMath::Vector2(*aResult.$);
		DirectX::SimpleMath::Vector2::Max(*aVec1.$, *aVec2.$, *aResult.$);
	}

	void Vector2::Lerp(const Vector2& aVec1, const Vector2& aVec2, float aRatio, Vector2& aResult) {
		DirectX::SimpleMath::Vector2::Lerp(*aVec1.$, *aVec2.$, aRatio, *aResult.$);
	}

	void Vector2::SLerp(const Vector2 & aVec1, const Vector2 & aVec2, float aRatio, Vector2 & aResult)
	{
		DirectX::SimpleMath::Vector2::SmoothStep(*aVec1.$, *aVec2.$, aRatio, *aResult.$);
	}

	void Vector2::Hermite(const Vector2 & aStartPosition, const Vector2 & aStartVector, const Vector2 & aEndPosition, const Vector2 & aEndVector, float aRatio, Vector2 & aResult)
	{
		DirectX::SimpleMath::Vector2::Hermite(*aStartPosition.$, *aStartVector.$, *aEndPosition.$, *aEndVector.$, aRatio, *aResult.$);
	}


}
