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
		Numeric(const T& aValue);

		/**
			@brief ���������
		*/
		~Numeric();

		/**
			@brief �g�ݍ��݌^�̐��̒l���擾����

			@return �g�ݍ��݌^�̐��̒l(Numeric<int>�Ȃ�int�^�ŕԂ�
		*/

		/**
		@brief �g�ݍ��ݐ����^�̑��

		@param
		@return
		*/

		//���Z�q�̃I�[�o�[���[�h�Q
		operator T()const noexcept;

		//������Z

		/**
			@brief	���l��������
			@param	(�g��)�����^
			@return	���Z��̃C���X�^���X�Q�� 
		*/
		Numeric<T>& operator=(const T& aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator+=(const T& aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator-=(const T& aVal);

		/**
		@brief	���l����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator*=(const T& aVal);

		/**
		@brief	���l�����Z�������ʂ�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator/=(const T& aVal);

		/**
		@brief	���l�����Z�������ʂ̂��܂��������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		//Numeric<T>& operator%=(const T& aVal);

		/**
		@brief	���l���E�V�t�g�������ʂ�������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator>>=(const T& aVal);

		/**
		@brief	���l�����V�t�g�������ʂ�������(Integer<>�ɈڐA����)
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		Numeric<T>& operator<<=(const T& aVal);

		//���Z

		/**
		@brief	���l�����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator+(const T& aVal)const;

		/**
		@brief	���l�����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator-(const T& aVal)const;

		/**
		@brief	���l����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator*(const T& aVal)const;

		/**
		@brief	���l�����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator/(const T& aVal)const;

		/**
		@brief	���l�����Z�����ۂ̏�]�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		//Numeric<T> operator%(const T& aVal)const;

		/**
		@brief	���l�����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator>>(const T& aVal)const;

		/**
		@brief	���l�����Z�������ʂ��擾����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X
		*/
		Numeric<T> operator<<(const T& aVal)const;

		//��r

		/**
		@brief	���l���r���ē��������true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator==(const T& aVal)const;

		/**
		@brief	���l���r���ē������Ȃ����true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator!=(const T& aVal)const;

		/**
		@brief	���l���r���Ď������藧�Ă�true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator<(const T& aVal)const;

		/**
		@brief	���l���r���Ď������藧�Ă�true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator<=(const T& aVal)const;

		/**
		@brief	���l���r���Ď������藧�Ă�true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator>(const T& aVal)const;

		/**
		@brief	���l���r���Ď������藧�Ă�true��Ԃ�
		@param	(�g��)�����^
		@return	��r�������藧�Ă�true��Ԃ�
		*/
		bool operator>=(const T& aVal)const;

		//�_��



		/**
		@brief	��̐��l�Ƃ̘_���ς��擾����
		@param	(�g��)�����^
		@return	�_���ς̉��Z����
		*/
		//Numeric<T> operator&(const T&aVal);

		/**
		@brief	��̐��l�Ƃ̔r���I�_���a���擾����
		@param	(�g��)�����^
		@return	�_���ς̉��Z����
		*/
		//Numeric<T> operator^(const T&aVal);

		/**
		@brief	��̐��l�Ƃ̘_���a���擾����
		@param	(�g��)�����^
		@return	�_���ς̉��Z����
		*/
		//Numeric<T> operator|(const T&aVal);
		
		/**
		@brief	��̐��l�Ƃ̘_���a���擾����
		@param	(�g��)�����^
		@return	�_���ς̉��Z����
		*/
		//Numeric<T> operator~()const noexcept;


		/**
		@brief	���l�Ƃ̘_���ς�������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		//Numeric<T> operator&=(const T&aVal);

		/**
		@brief	���l�Ƃ̔r���I�_���a��������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		//Numeric<T> operator^=(const T&aVal);

		/**
		@brief	���l�Ƃ̘_���a��������
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�Q��
		*/
		//Numeric<T> operator|=(const T&aVal);

		//�C���N���f�N��


		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�̎Q��
		*/
		//Numeric<T>& operator ++();

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z��̃C���X�^���X�̎Q��
		*/
		//Numeric<T>& operator --();

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z�O�̃C���X�^���X
		*/
		//Numeric<T> operator ++(int);

		/**
		@brief	���l��1���Z����
		@param	(�g��)�����^
		@return	���Z�O�̃C���X�^���X
		*/
		//Numeric<T> operator --(int);

		static constexpr T min = (std::numeric_limits<T>::min)(); /**< �^���\���ŏ��� */
		static constexpr T max = (std::numeric_limits<T>::max)(); /**< �^���\���ő吔 */


		protected:
		T mValue; /**< ���l�f�[�^ */
		
	}; 
}
#include"Numeric.inl"


