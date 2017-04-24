#pragma once

/**
@file CoreSystem.hpp
@date Create for 2017/03/03 23:26

@author msty

* @brief アプリケーションを管理しているクラス。
アプリケーション単位で処理する際に使用。
*/

#include<memory>

namespace Environ {

	/*
		Float型の値3つの汎用クラス
	*/

	class Float4 {
	public:
		Float4();
		Float4(float x);
		Float4(float aX, float aY, float aZ);
		Float4(const Float4& aV);
		virtual ~Float4();

		bool operator==(const Float4& aValue)const;
		bool operator!=(const Float4& aValue)const;

		Float4& operator=(const Float4&aValue);

		Float4& operator+=(const Float4& aValue);
		Float4& operator+=(float aValue);

		Float4& operator-=(const Float4& aValue);
		Float4& operator-=(float aValue);
		
		Float4& operator*=(const Float4& aValue);
		Float4& operator*=(float aValue);
		
		Float4& operator/=(const Float4& aValue);
		Float4& operator/=(float aValue);

		Float4 operator+(Float4 aValue)const;
		Float4 operator+(float aValue)const;

		Float4 operator-(Float4 aValue)const;
		Float4 operator-(float aValue)const;

		Float4 operator*(Float4 aValue)const;
		Float4 operator*(float aValue)const;

		Float4 operator/(Float4 aValue)const;
		Float4 operator/(float aValue)const;


	private:
		class __Float4;
		std::unique_ptr<__Float4>$;

	public:
		float& x;
		float& y;
		float& z;

	};


}
