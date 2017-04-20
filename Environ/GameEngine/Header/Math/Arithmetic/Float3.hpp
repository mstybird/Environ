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
		virtual ~Float3();
		
		Float3& Add(const float aX, const float aY, const float aZ);



	private:
		class __Float3;
		std::unique_ptr<__Float3>$;

	public:
		float& x;
		float& y;
		float& z;

	};


}
