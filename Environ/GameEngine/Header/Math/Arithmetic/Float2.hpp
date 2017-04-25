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
		Float�^�̒l2�̔ėp�N���X
	*/

	class Float2 {
	public:
		Float2();
		Float2(float x);
		Float2(float aX, float aY);
		Float2(const Float2& aV);
		virtual ~Float2();

		bool operator==(const Float2& aValue)const;
		bool operator!=(const Float2& aValue)const;

		Float2& operator=(const Float2&aValue);

		Float2& operator+=(const Float2& aValue);
		Float2& operator+=(float aValue);

		Float2& operator-=(const Float2& aValue);
		Float2& operator-=(float aValue);
		
		Float2& operator*=(const Float2& aValue);
		Float2& operator*=(float aValue);
		
		Float2& operator/=(const Float2& aValue);
		Float2& operator/=(float aValue);

		Float2 operator+(Float2 aValue)const;
		Float2 operator+(float aValue)const;

		Float2 operator-(Float2 aValue)const;
		Float2 operator-(float aValue)const;

		Float2 operator*(Float2 aValue)const;
		Float2 operator*(float aValue)const;

		Float2 operator/(Float2 aValue)const;
		Float2 operator/(float aValue)const;


	private:
		class __Float2;
	protected:
		//�t���[�����[�N�Ŏg�p���Ă���B
		std::unique_ptr<__Float2>$;

	public:
		float& x;
		float& y;

	};


}
