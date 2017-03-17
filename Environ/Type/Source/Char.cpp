#include "..\..\GameEngine\Header\Type\Char.hpp"
#include "..\..\GameEngine\Header\Type\Char.hpp"
#include <Type/Char.hpp>
#include <Type\String.hpp>
#include<cuchar>

namespace Environ {

	//�����̏�����
	Environ::Char::Char():Char('\0'){}

	//�}���`�o�C�g�����̏�����
	Char::Char(const char aChara):mValue(aChara){}

	Char::operator char()const
	{
		return mValue;
	}
	Char& Char::operator=(const char & aChara)
	{
		mValue=aChara;
		return *this;
	}

	bool Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	bool Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}
	bool Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	bool Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//���l���ǂ���
	bool Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//�󔒕������ǂ���
	bool Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}
	bool Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}
	bool Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}
	bool Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null����(0)���ǂ������ׂ�
	bool Char::IsNull()const
	{
		
		return mValue == 0;
	}

	//�������ɕϊ�
	Char & Char::ToLower()
	{
		mValue = ::tolower(mValue);
		return *this;
	}
	Char & Char::ToUpper()
	{
		mValue = ::toupper(mValue);
		return *this;
	}
	bool Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	bool Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}
	String Char::ToString() const
	{
		return String(mValue);
	}
}