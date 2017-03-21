#pragma once
/**
	@file Integer.hpp
	@date Create for 2017/03/05 20:06

	@author msty

	@brief Environ�W���̊g�������^
*/

#include"Numeric.hpp"
#include <stdint.h>
#include<limits>
namespace Environ {
	/**
		@class Integer
		@brief Environ�W���̊g�������^
	*/
	template<typename T=int>
	class Integer :public Numeric<T>{
	public:
		Integer();
		Integer(const T aValue);


		/**
		@brief	���l�����Z�������ʂ̂��܂��������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T>& operator%=(const T aVal);



		/**
		@brief	���l���E�V�t�g�������ʂ�������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T>& operator>>=(const T aVal)noexcept;

		/**
		@brief	���l�����V�t�g�������ʂ�������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T>& operator<<=(const T aVal)noexcept;

		Integer<T> operator~()const noexcept;



		/**
		@brief	���l�Ƃ̘_���ς�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T> operator&=(const T aVal)noexcept;

		/**
		@brief	���l�Ƃ̔r���I�_���a��������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T> operator^=(const T aVal)noexcept;

		/**
		@brief	���l�Ƃ̘_���a��������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Integer<T> operator|=(const T aVal)noexcept;


		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�̎Q��
		*/
		Integer<T>& operator ++()noexcept;

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�̎Q��
		*/
		Integer<T>& operator --()noexcept;

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z�O�̃C���X�^���X
		*/
		Integer<T> operator ++(int)const noexcept;

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z�O�̃C���X�^���X
		*/
		Integer<T> operator --(int)const noexcept;

		static constexpr T MaxDigit = (std::numeric_limits<T>::digits10);	/**< 10�i���ŕ\����ő包�� */ 

	};


}

using SByte = Environ::Integer<int8_t>;
using Byte = Environ::Integer<uint8_t>;
using Short = Environ::Integer<int16_t>;
using UShort = Environ::Integer<uint16_t>;
using Int = Environ::Integer<int32_t>;
using UInt = Environ::Integer<uint32_t>;
using Long = Environ::Integer<int64_t>;
using ULong = Environ::Integer<uint64_t>;
