#pragma once
#include<cuchar>

namespace Environ {

	//�����̏�����
	inline Environ::Char::Char():Char('\0'){}

	//�}���`�o�C�g�����̏�����
	inline Char::Char(const char aChara):mValue(aChara){}

	inline Char::operator char()const
	{
		return mValue;
	}

	//�����������
	inline Char& Char::operator=(const char & aChara)
	{
		mValue=aChara;
		return *this;
	}

	//������r����
	inline Boolean Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//������r����
	inline Boolean Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//������r����(�ے�)
	inline Boolean Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//������r����(�ے�)
	inline Boolean Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//���l���ǂ���
	inline Boolean Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//�󔒕������ǂ���
	inline Boolean Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}

	//�A���t�@�x�b�g���ǂ���
	inline Boolean Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//�A���t�@�x�b�g�啶�����ǂ���
	inline Boolean Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//�A���t�@�x�b�g���������ǂ���
	inline Boolean Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null����(0)���ǂ������ׂ�
	inline Boolean Char::IsNull()const
	{
		
		return mValue == 0;
	}

	//�A���t�@�x�b�g���������ɕϊ�
	inline Char & Char::ToLower()
	{
		mValue = static_cast<char>(::tolower(mValue));
		return *this;
	}

	//�A���t�@�x�b�g��啶���ɕϊ�
	inline Char & Char::ToUpper()
	{
		mValue = static_cast<char>(::toupper(mValue));
		return *this;
	}


	//������r����
	inline Boolean Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//������r����
	inline Boolean Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//������ɕϊ�����
	inline String Char::ToString() const
	{
		return String(mValue);
	}
}