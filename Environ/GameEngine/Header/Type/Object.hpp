#pragma once
/**
	@file Object.hpp
	@date Create for 2017/03/14 15:55

	@author msty

	@brief �g�ݍ��݌^�g���N���X�ȊO�̂��ׂẴN���X�������I�u�W�F�N�g
*/
//#include"String.hpp"
namespace Environ {
	class String;
	class Object {
	public:
		Object() {};
		~Object() {};
		virtual String ToString()const;
	};
}
