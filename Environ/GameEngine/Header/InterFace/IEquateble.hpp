#pragma once

/**
	@file IEquateble.hpp
	@date Create for 2017/03/14 15:36

	@author msty

	@brief ��r���s���C���^�[�t�F�[�X

*/
//#include"Type/Boolean.hpp"
namespace Environ {
	/**
		@class IEquateble
		@brief ��r���s���C���^�[�t�F�[�X�e���v���[�g
	*/

	class Boolean;

	template<typename T>
	class IEquateble
	{
	public:
		IEquateble() {}
		virtual ~IEquateble() {}
		virtual Boolean Equal(const T& aValue)const = 0;
	protected:
	private:
	};
}