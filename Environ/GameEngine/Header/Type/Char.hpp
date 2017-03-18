#pragma once
#include"InterFace/IEquateble.hpp"
#include "Object.hpp"
namespace Environ {
	/**
		@class Char
		@brief �����^�N���X
		������char16_t�̗\��ł��������̂�VS���̎����~�X�ɂ��char�ɕύX
	*/
	class Char :
		public Object,
		public IEquateble<char>,
		public IEquateble<Char>
	{
	public:
		Char();
		Char(const char aChara);
		operator char()const;
		Char& operator=(const char& aChara);
		Boolean operator==(const char& aChara)const; 
		Boolean operator==(const Char& aChara)const;
		Boolean operator!=(const char& aChara)const;
		Boolean operator!=(const Char& aChara)const;

		Boolean IsDigit()const;
		Boolean IsSpace()const;
		Boolean IsAlpha()const;
		Boolean IsUpper()const;
		Boolean IsLower()const;
		Boolean IsNull()const;
		Char& ToLower();
		Char& ToUpper();


		virtual Boolean Equal(const char& aValue)const override;
		virtual Boolean Equal(const Char& aValue)const override;


		virtual String ToString() const override;

	private:
		char mValue;
	};
}

