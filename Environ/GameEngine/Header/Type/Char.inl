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
	Boolean Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//������r����
	Boolean Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//������r����(�ے�)
	Boolean Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//������r����(�ے�)
	Boolean Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//���l���ǂ���
	Boolean Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//�󔒕������ǂ���
	Boolean Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}

	//�A���t�@�x�b�g���ǂ���
	Boolean Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//�A���t�@�x�b�g�啶�����ǂ���
	Boolean Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//�A���t�@�x�b�g���������ǂ���
	Boolean Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null����(0)���ǂ������ׂ�
	Boolean Char::IsNull()const
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
	Boolean Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//������r����
	Boolean Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//������ɕϊ�����
	String Char::ToString() const
	{
		return String(mValue);
	}
}