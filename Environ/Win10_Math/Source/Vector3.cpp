#include<Math\Arithmetic\Vector3.hpp>
#include"__Float3.hxx"
namespace Environ {

	//定数定義に使用
	const Vector3 Vector3Define(DirectX::SimpleMath::Vector3 aVec) {
		Vector3 lResult;
		lResult.x = aVec.x;
		lResult.y = aVec.y;
		lResult.z = aVec.z;
		return lResult;
	}

	//各種定数を定義(全て静的メンバ定数)
	const Vector3 Vector3::cZero = Vector3Define(DirectX::SimpleMath::Vector3::Zero);
	const Vector3 Vector3::cOne = Vector3Define(DirectX::SimpleMath::Vector3::One);
	const Vector3 Vector3::cUnitX = Vector3Define(DirectX::SimpleMath::Vector3::UnitX);
	const Vector3 Vector3::cUnitY = Vector3Define(DirectX::SimpleMath::Vector3::UnitY);
	const Vector3 Vector3::cUnitZ = Vector3Define(DirectX::SimpleMath::Vector3::UnitZ);
	const Vector3 Vector3::cUp = Vector3Define(DirectX::SimpleMath::Vector3::Up);
	const Vector3 Vector3::cDown = Vector3Define(DirectX::SimpleMath::Vector3::Down);
	const Vector3 Vector3::cRight = Vector3Define(DirectX::SimpleMath::Vector3::Right);
	const Vector3 Vector3::cLeft = Vector3Define(DirectX::SimpleMath::Vector3::Left);
	const Vector3 Vector3::cForward = Vector3Define(DirectX::SimpleMath::Vector3::Forward);
	const Vector3 Vector3::cBackward = Vector3Define(DirectX::SimpleMath::Vector3::Backward);

	//0初期化をする
	Environ::Vector3::Vector3():
		Float3()
	{
	}

	//指定した値で初期化する
	Environ::Vector3::Vector3(float aX, float aY, float aZ) :
		Float3()
	{
	}

	//別のFloat3型で初期化する
	Environ::Vector3::Vector3(const Float3 & aValue):Float3(aValue.x, aValue.y, aValue.z)
	{
	}

	//処理なし
	Environ::Vector3::~Vector3()
	{
	}

	//代入処理
	Vector3 & Environ::Vector3::operator=(const Float3 & aValue)
	{
		Float3::operator=(aValue);
		return *this;
	}

	//Float3の加算処理
	Vector3 & Environ::Vector3::operator+=(const Float3 & aValue)
	{
		Float3::operator+=(aValue);
		return *this;
	}

	//指定値をxyz全てに加算する
	Vector3 & Environ::Vector3::operator+=(float aValue)
	{
		Float3::operator+=(aValue);
		return *this;
	}

	//Float3の加算処理
	Vector3 & Environ::Vector3::operator-=(const Float3 & aValue)
	{
		Float3::operator-=(aValue);
		return *this;
	}


	Vector3 & Environ::Vector3::operator-=(float aValue)
	{
		Float3::operator-=(aValue);
		return *this;
	}

	//Float3の加算処理
	Vector3 & Environ::Vector3::operator*=(const Float3 & aValue)
	{
		Float3::operator*=(aValue);
		return *this;
	}

	//Float3の加算処理
	Vector3 & Environ::Vector3::operator/=(const Float3 & aValue)
	{
		Float3::operator/=(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator+(const Float3 & aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator+(float aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator-(const Float3 & aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator-(float aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator*(const Float3 & aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Vector3 Environ::Vector3::operator*(float aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Float3 Environ::Vector3::operator/(const Float3 & aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	Float3 Environ::Vector3::operator/(float aValue) const
	{
		Float3::operator+(aValue);
		return *this;
	}

	bool Environ::Vector3::IsClamp(const Vector3 & aMin, const Vector3 & aMax) const
	{
		//範囲チェック
		if (
			aMin.x <= this->x&&this->x <= aMax.x&&
			aMin.y <= this->y&&this->y <= aMax.y&&
			aMin.z <= this->z&&this->z <= aMax.z
			) {
			return true;
		}
		//範囲外なら偽
		return false;
	}

	float Vector3::Length()const {
		return $->Length();
	}


	Vector3& Vector3::Normalize() {
		$->Normalize();
		return *this;
	}


	Vector3& Vector3::Reflect(const Vector3& aNormal) {
		DirectX::SimpleMath::Vector3::Reflect(*this->$, *aNormal.$);
		return *this;
	}

	float Vector3::Dot(const Vector3& aRightVector)const {
		return $->Dot(*aRightVector.$);
	}

	Vector3 & Environ::Vector3::Cross(const Vector3 & aVector)
	{
		$->Cross(*aVector.$, *this->$);
		return *this;
	}

	Vector3 & Environ::Vector3::Clamp(const Vector3 & aMin, const Vector3 & aMax)
	{
		$->Clamp(*aMin.$, *aMax.$);
		return *this;
	}

	void Environ::Vector3::Normalize(const Vector3& aVector,Vector3 & aResult)
	{
		aVector.$->Normalize(*aResult.$);
	}

	
	void Environ::Vector3::Cross(const Vector3& aVectorLeft, const Vector3& aVectorRight, Vector3 & aResult)
	{
		aVectorLeft.$->Cross(*aVectorRight.$, *aResult.$);
	}

	void Environ::Vector3::Clamp(const Vector3& aVector,const Vector3 & aMin, const Vector3 & aMax, Vector3 & aResult)
	{
		aVector.$->Clamp(*aMin.$, *aMax.$, *aResult.$);
	}

	float Environ::Vector3::Dot(const Vector3 & aLeft, const Vector3 & aRight)
	{
		return aLeft.Dot(aRight);
	}

	void Vector3::Reflect(const Vector3& aInVector,const Vector3& aNormal, Vector3&aResult) {
		DirectX::SimpleMath::Vector3::Reflect(*aInVector.$, *aNormal.$, *aResult.$);
	}

	void Vector3::Min(const Vector3& aVec1, const Vector3& aVec2, Vector3& aResult) {
		DirectX::SimpleMath::Vector3::Min(*aVec1.$, *aVec2.$, *aResult.$);
	}

	void Vector3::Max(const Vector3& aVec1, const Vector3& aVec2, Vector3& aResult) {
		DirectX::SimpleMath::Vector3(*aResult.$);
		DirectX::SimpleMath::Vector3::Max(*aVec1.$, *aVec2.$, *aResult.$);
	}

	void Vector3::Lerp(const Vector3& aVec1, const Vector3& aVec2, float aRatio, Vector3& aResult) {
		DirectX::SimpleMath::Vector3::Lerp(*aVec1.$, *aVec2.$, aRatio, *aResult.$);
	}

	void Vector3::SLerp(const Vector3 & aVec1, const Vector3 & aVec2, float aRatio, Vector3 & aResult)
	{
		DirectX::SimpleMath::Vector3::SmoothStep(*aVec1.$, *aVec2.$, aRatio, *aResult.$);
	}

	void Vector3::Hermite(const Vector3 & aStartPosition, const Vector3 & aStartVector, const Vector3 & aEndPosition, const Vector3 & aEndVector, float aRatio, Vector3 & aResult)
	{
		DirectX::SimpleMath::Vector3::Hermite(*aStartPosition.$, *aStartVector.$, *aEndPosition.$, *aEndVector.$, aRatio, *aResult.$);
	}


}
