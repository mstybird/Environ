#pragma once

#include"Float4.hpp"
namespace Environ {

	class Vector4 :
		public Float4 {
	public:
		
		Vector4();
		Vector4(const Float4& aValue);
		virtual ~Vector4();

		Vector4& operator=(const Float4&aValue);

		Vector4& operator+=(const Float4& aValue);
		Vector4& operator+=(float aValue);

		Vector4& operator-=(const Float4& aValue);
		Vector4& operator-=(float aValue);

		Vector4& operator*=(const Float4& aValue);
		Vector4& operator*=(float aValue);

		Vector4& operator/=(const Float4& aValue);
		Vector4& operator/=(float aValue);

		Vector4& operator+(const Float4& aValue)const;
		Vector4& operator+(float aValue)const;

		Vector4 operator-(const Float4& aValue)const;
		Vector4 operator-(float aValue)const;

		Vector4 operator*(const Float4& aValue)const;
		Vector4 operator*(float aValue)const;

		Float4 operator/(const Float4& aValue)const;
		Float4 operator/(float aValue)const;

		Vector4 operator+()const;
		Vector4 operator-()const;

		bool IsClamp(const Vector4& aMin, const Vector4& aMax)const;

		float Length()const;
		float LengthSquared()const;

		Vector4& Normalize();
		Vector4& Reflect(const Vector4& aNormal);
		float Dot(const Vector4& aRightVector)const;
		Vector4& Cross(const Vector4& aVector);
		Vector4& Clamp(const Vector4& aMin, const Vector4& aMax)const;

		void Normalize(Vector4& aResult)const;
		void Reflect(const Vector4& aNormal, Vector4& aResult)const;
		void Cross(const Vector4& aVector, Vector4& aResult);
		void Clamp(const Vector4& aMin, const Vector4& aMax, Vector4&aResult)const;



		static float Dot(const Vector4& aLeft, const Vector4& aRight);
		static void Reflect(const Vector4& aInVector, const Vector4& aNormal, Vector4& aResult);
		static void Min(const Vector4& aVec1, const Vector4& aVec2, Vector4& aResult);
		static void Max(const Vector4& aVec1, const Vector4& aVec2, Vector4& aResult);
		static void Lerp(const Vector4& aVec1, const Vector4& aVec2, float aRatio, Vector4& aResult);
		static void SLerp(const Vector4& aVec1, const Vector4& aVec2, float aRatio, Vector4& aResult);
		static void Hermite(const Vector4& aStartPosition, const Vector4& aStartVector, const Vector4& aEndPosition, const Vector4& aEndVector, Vector4& aResult);
		static void Reflect(const Vector4& aInVector,const Vector4& aNormal, Vector4& aResult);

		static const Vector4 cZero;
		static const Vector4 cOne;
		static const Vector4 cUnitX;
		static const Vector4 cUnitY;
		static const Vector4 cUnitZ;
		static const Vector4 cUp;
		static const Vector4 cDown;
		static const Vector4 cRight;
		static const Vector4 cLeft;
		static const Vector4 cForward;
		static const Vector4 cBackward;
	};



}

