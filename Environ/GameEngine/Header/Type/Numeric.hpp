#pragma once
/**
	@file Numeric.hpp
	@date Create for 2017/03/08 11:32

	@author msty

	@brief �S�Ă̑g�ݍ��ݐ��l�^�̋��ʂƂȂ�N���X
	�f�o�b�O�r���h�ł̃p�t�H�[�}���X���ێ����邽�߂ɃC�����C���Ŏ�������
*/
#include<limits.h>

namespace Environ {

	/**
		@class Numeric
		@brief �g�ݍ��ݐ��l�^���O��Ȃ��߁A
		T�^�̒l�͎Q�Ɠn�����Ȃ�(�ÖكL���X�g��F�߂邽��)
	*/
	template<typename T=int>
	class Numeric {
	public:
		/**
		@brief 0�ŏ���������

		@param
		*/
		Numeric();

		/**
			@brief �w�肵���l�ŏ���������
			
			@param 
		*/
		Numeric(const T aValue);

		/**
			@brief ���������
		*/
		~Numeric();


		/**
		@brief �g�ݍ��ݐ����^�̑��

		@param
		@return
		*/
		operator T()const noexcept;

		//������Z

		/**
			@brief	���l��������
			@param	(�g��)�����^
			@return	���Z��̃C���X�^���X�Q�� 
		*/
		Numeric<T>& operator=(const T aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator+=(const T aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator-=(const T aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator/=(const T aVal);





		static constexpr T min = (std::numeric_limits<T>::min)(); /**< �^���\���ŏ��� */
		static constexpr T max = (std::numeric_limits<T>::max)(); /**< �^���\���ő吔 */


		protected:
		T mValue; /**< ���l�f�[�^ */
		
	}; 
}


