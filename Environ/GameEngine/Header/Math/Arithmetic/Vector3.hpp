#pragma once

#include"Float3.hpp"
namespace Environ {

	class Vector3 :
		public Float3 {
	public:
		
		Vector3();
		Vector3(const Float3& aValue);
		virtual ~Vector3();

		Vector3& operator=(const Float3&aValue);

		Vector3& operator+=(const Float3& aValue);
		Vector3& operator+=(float aValue);

		Vector3& operator-=(const Float3& aValue);
		Vector3& operator-=(float aValue);

		Vector3& operator*=(const Float3& aValue);
		Vector3& operator*=(float aValue);

		Vector3& operator/=(const Float3& aValue);
		Vector3& operator/=(float aValue);

		Vector3& operator+(const Float3& aValue)const;
		Vector3& operator+(float aValue)const;

		Vector3 operator-(const Float3& aValue)const;
		Vector3 operator-(float aValue)const;

		Vector3 operator*(const Float3& aValue)const;
		Vector3 operator*(float aValue)const;

		Float3 operator/(const Float3& aValue)const;
		Float3 operator/(float aValue)const;

		Vector3 operator+()const;
		Vector3 operator-()const;

		bool IsClamp(const Vector3& aMin, const Vector3& aMax)const;

		float Length()const;
		float LengthSquared()const;

		Vector3& Normalize();
		Vector3& Reflect(const Vector3& aNormal);
		float Dot(const Vector3& aRightVector)const;
		Vector3& Cross(const Vector3& aVector);
		Vector3& Clamp(const Vector3& aMin, const Vector3& aMax)const;

		void Normalize(Vector3& aResult)const;
		void Reflect(const Vector3& aNormal, Vector3& aResult)const;
		void Cross(const Vector3& aVector, Vector3& aResult);
		void Clamp(const Vector3& aMin, const Vector3& aMax, Vector3&aResult)const;



		static float Dot(const Vector3& aLeft, const Vector3& aRight);
		static void Reflect(const Vector3& aInVector, const Vector3& aNormal, Vector3& aResult);
		static void Min(const Vector3& aVec1, const Vector3& aVec2, Vector3& aResult);
		static void Max(const Vector3& aVec1, const Vector3& aVec2, Vector3& aResult);
		static void Lerp(const Vector3& aVec1, const Vector3& aVec2, float aRatio, Vector3& aResult);
		static void SLerp(const Vector3& aVec1, const Vector3& aVec2, float aRatio, Vector3& aResult);
		static void Hermite(const Vector3& aStartPosition, const Vector3& aStartVector, const Vector3& aEndPosition, const Vector3& aEndVector, Vector3& aResult);
		static void Reflect(const Vector3& aInVector,const Vector3& aNormal, Vector3& aResult);

		static const Vector3 cZero;
		static const Vector3 cOne;
		static const Vector3 cUnitX;
		static const Vector3 cUnitY;
		static const Vector3 cUnitZ;
		static const Vector3 cUp;
		static const Vector3 cDown;
		static const Vector3 cRight;
		static const Vector3 cLeft;
		static const Vector3 cForward;
		static const Vector3 cBackward;
	};



}

