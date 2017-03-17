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
		bool operator==(const char& aChara)const;
		bool operator==(const Char& aChara)const;
		bool operator!=(const char& aChara)const;
		bool operator!=(const Char& aChara)const;

		bool IsDigit()const;
		bool IsSpace()const;
		bool IsAlpha()const;
		bool IsUpper()const;
		bool IsLower()const;
		bool IsNull()const;
		Char& ToLower();
		Char& ToUpper();


		virtual bool Equal(const char& aValue)const override;
		virtual bool Equal(const Char& aValue)const override;


		virtual String ToString() const override;

	private:
		char mValue;
	};
}

