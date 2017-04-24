#pragma once

#include"Float2.hpp"
namespace Environ {

	class Vector2 :
		public Float2 {
	public:
		
		Vector2();
		Vector2(const Float2& aValue);
		virtual ~Vector2();

		Vector2& operator=(const Float2&aValue);

		Vector2& operator+=(const Float2& aValue);
		Vector2& operator+=(float aValue);

		Vector2& operator-=(const Float2& aValue);
		Vector2& operator-=(float aValue);

		Vector2& operator*=(const Float2& aValue);
		Vector2& operator*=(float aValue);

		Vector2& operator/=(const Float2& aValue);
		Vector2& operator/=(float aValue);

		Vector2& operator+(const Float2& aValue)const;
		Vector2& operator+(float aValue)const;

		Vector2 operator-(const Float2& aValue)const;
		Vector2 operator-(float aValue)const;

		Vector2 operator*(const Float2& aValue)const;
		Vector2 operator*(float aValue)const;

		Float2 operator/(const Float2& aValue)const;
		Float2 operator/(float aValue)const;

		Vector2 operator+()const;
		Vector2 operator-()const;

		bool IsClamp(const Vector2& aMin, const Vector2& aMax)const;

		float Length()const;
		float LengthSquared()const;

		Vector2& Normalize();
		Vector2& Reflect(const Vector2& aNormal);
		float Dot(const Vector2& aRightVector)const;
		Vector2& Cross(const Vector2& aVector);
		Vector2& Clamp(const Vector2& aMin, const Vector2& aMax)const;

		void Normalize(Vector2& aResult)const;
		void Reflect(const Vector2& aNormal, Vector2& aResult)const;
		void Cross(const Vector2& aVector, Vector2& aResult);
		void Clamp(const Vector2& aMin, const Vector2& aMax, Vector2&aResult)const;



		static float Dot(const Vector2& aLeft, const Vector2& aRight);
		static void Reflect(const Vector2& aInVector, const Vector2& aNormal, Vector2& aResult);
		static void Min(const Vector2& aVec1, const Vector2& aVec2, Vector2& aResult);
		static void Max(const Vector2& aVec1, const Vector2& aVec2, Vector2& aResult);
		static void Lerp(const Vector2& aVec1, const Vector2& aVec2, float aRatio, Vector2& aResult);
		static void SLerp(const Vector2& aVec1, const Vector2& aVec2, float aRatio, Vector2& aResult);
		static void Hermite(const Vector2& aStartPosition, const Vector2& aStartVector, const Vector2& aEndPosition, const Vector2& aEndVector, Vector2& aResult);
		static void Reflect(const Vector2& aInVector,const Vector2& aNormal, Vector2& aResult);

		static const Vector2 cZero;
		static const Vector2 cOne;
		static const Vector2 cUnitX;
		static const Vector2 cUnitY;
		static const Vector2 cUnitZ;
		static const Vector2 cUp;
		static const Vector2 cDown;
		static const Vector2 cRight;
		static const Vector2 cLeft;
		static const Vector2 cForward;
		static const Vector2 cBackward;
	};



}

