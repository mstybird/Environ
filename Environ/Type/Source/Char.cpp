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

	//�����������
	Char& Char::operator=(const char & aChara)
	{
		mValue=aChara;
		return *this;
	}

	//������r����
	bool Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//������r����
	bool Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//������r����(�ے�)
	bool Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//������r����(�ے�)
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

	//�A���t�@�x�b�g���ǂ���
	bool Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//�A���t�@�x�b�g�啶�����ǂ���
	bool Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//�A���t�@�x�b�g���������ǂ���
	bool Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null����(0)���ǂ������ׂ�
	bool Char::IsNull()const
	{
		
		return mValue == 0;
	}

	//�A���t�@�x�b�g���������ɕϊ�
	Char & Char::ToLower()
	{
		mValue = ::tolower(mValue);
		return *this;
	}

	//�A���t�@�x�b�g��啶���ɕϊ�
	Char & Char::ToUpper()
	{
		mValue = ::toupper(mValue);
		return *this;
	}


	//������r����
	bool Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//������r����
	bool Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//������ɕϊ�����
	String Char::ToString() const
	{
		return String(mValue);
	}
}