#pragma once

/**
@file CoreSystem.hpp
@date Create for 2017/03/03 23:26

@author msty

* @brief �A�v���P�[�V�������Ǘ����Ă���N���X�B
�A�v���P�[�V�����P�ʂŏ�������ۂɎg�p�B
*/

#include<memory>

namespace Environ {

	/*
		Float�^�̒l3�̔ėp�N���X
	*/

	class Float3 {
	public:
		Float3();
		Float3(float x);
		Float3(float aX, float aY, float aZ);
		Float3(const Float3& aV);
		virtual ~Float3();

		bool operator==(const Float3& aValue)const;
		bool operator!=(const Float3& aValue)const;

		Float3& operator=(const Float3&aValue);

		Float3& operator+=(const Float3& aValue);
		Float3& operator+=(float aValue);

		Float3& operator-=(const Float3& aValue);
		Float3& operator-=(float aValue);
		
		Float3& operator*=(const Float3& aValue);
		Float3& operator*=(float aValue);
		
		Float3& operator/=(const Float3& aValue);
		Float3& operator/=(float aValue);

		Float3 operator+(Float3 aValue)const;
		Float3 operator+(float aValue)const;

		Float3 operator-(Float3 aValue)const;
		Float3 operator-(float aValue)const;

		Float3 operator*(Float3 aValue)const;
		Float3 operator*(float aValue)const;

		Float3 operator/(Float3 aValue)const;
		Float3 operator/(float aValue)const;


	private:
		class __Float3;
		std::unique_ptr<__Float3>$;

	public:
		float& x;
		float& y;
		float& z;

	};


}
