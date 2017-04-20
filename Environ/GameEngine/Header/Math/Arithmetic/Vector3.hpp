#pragma once

#include"Float3.hpp"

namespace Environ {

	class Vector3 :public Float3 {
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

	};



}

