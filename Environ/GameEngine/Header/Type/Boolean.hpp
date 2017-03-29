#pragma once
#include "InterFace\IEquateble.hpp"
#include "Object.hpp"
//#include"String.hpp"
/**
	@file Boolean.hpp
	@date Create for 2017/03/14 16:07

	@author msty

	@brief bool�^�g��
*/

namespace Environ {
	/**
		@class Boolean
		@brief bool�^�g���N���X
	*/
	class String;
	class Boolean:
		public Object,
		public IEquateble<bool>,
		public IEquateble<Boolean>
	{
	public:

		/**
		@brief false�ŏ���������
		*/		
		Boolean();

		/**
		@brief �w�肵���^�U�l�Ŏw�肷��
		@param ����������^�U�l
		*/
		Boolean(const bool aValue);

		/**
		@brief	�J������(���ݏ����͖���)
		*/
		~Boolean();


		/**
		@brief �ύX�\��bool�C���X�^���X���擾����
		@return ���̃C���X�^���X�̌��݂�bool�l
		*/
		operator bool()const;

		/**
		@brief	�ύX�s�\��bool�Q�Ƃ�Ԃ�
		@param	���̃C���X�^���X��const�Q�Ƃ��ꂽ���݂�bool�l
		@return	���̃C���X�^���X�̌��݂�bool�l��const�Q��
		*/
		operator const bool&()const;


		/**
		@brief	bool�l�Ɣ�r����
		@param	��r�Ώۂ�bool�l
		@return	�Ƃ��ɓ����^�U�l�Ȃ�true
		*/
		Boolean operator==(const bool aValue)const;

		/**
		@brief	bool�l�Ɣ�r����
		@param	��r�Ώۂ�bool�l
		@return	�Ƃ��ɈႤ�^�U�l�Ȃ�true
		*/
		Boolean operator!=(const bool aValue)const;


		/**
		@brief	�ʂ�Boolean�l�Ɣ�r����
		@param	��r�Ώۂ�Boolean�l
		@return	�Ƃ��ɓ����^�U�l�Ȃ�true
		*/
		Boolean operator==(const Boolean aValue)const;

		/**
		@brief	�ʂ�Boolean�l�Ɣ�r����
		@param	��r�Ώۂ�Boolean�l
		@return	�Ƃ��ɈႤ�^�U�l�Ȃ�true
		*/
		Boolean operator!=(const Boolean aValue)const;


		/**
		@brief	���݂̐^�U�l��true�����ׂ�
		@return	true�Ȃ�true��Ԃ�
		*/
		Boolean IsTrue()const;

		/**
		@brief	���݂̐^�U�l��false�����ׂ�
		@return	false�Ȃ�true��Ԃ�
		*/
		Boolean IsFalse()const;

		/**
		@brief	�^�U�l�𔽓]����
		@return	���]���ꂽBoolean�C���X�^���X�̎Q��
		*/
		Boolean& Reversal();


		/**
		@brief	bool�l�Ɣ�r����
		@param	��r�Ώۂ�bool�l
		@return
		*/
		virtual Boolean Equal(const bool& aValue)const override;

		/**
		@brief	bool�l�Ɣ�r����
		@param	��r�Ώۂ�Boolean�l
		@return
		*/
		virtual Boolean Equal(const Boolean& aValue)const override;


		/**
		@brief	�^�U�l�ɉ������������Ԃ�
		@return	true�Ȃ�"true",false�Ȃ�"false"
		*/
		virtual String ToString()const override;

	protected:
	private:
	
		bool mValue; /*< �����ێ����Ă���bool�l*/
	};
}
