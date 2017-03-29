#pragma once

namespace Environ {


	//false�ŏ�����
	inline Boolean::Boolean():mValue(false)
	{
	}

	//�w�肵��bool�l�ŏ�����
	inline Boolean::Boolean(const bool aValue):mValue(aValue)
	{
	}

	//�J���������݉������Ȃ�
	inline Boolean::~Boolean()
	{
	}

	//�ύX�\��bool�C���X�^���X��Ԃ�
	inline Boolean::operator bool() const
	{
		return mValue;
	}

	//�ύX�s�\��const�Q�Ƃ�Ԃ�
	inline Boolean::operator const bool&() const
	{
		return mValue;
	}

	//�����^�U�l����r����
	inline Boolean Boolean::operator==(const bool aValue)const
	{
		return mValue == aValue;
	}

	//�قȂ�^�U�l����r����
	inline Boolean Boolean::operator!=(const bool aValue)const
	{
		return mValue != aValue;
	}

	//�����^�U�l����r����
	inline Boolean Boolean::operator==(const Boolean aValue)const
	{
		return mValue == aValue.mValue;
	}

	//�قȂ�^�U�l����r����
	inline Boolean Boolean::operator!=(const Boolean aValue)const
	{
		return mValue != aValue.mValue;
	}

	//true�����ׂ�
	inline Boolean Boolean::IsTrue()const
	{
		return mValue == true;
	}

	//false�����ׂ�
	inline Boolean Boolean::IsFalse()const
	{
		return mValue == false;
	}

	//�^�U�l�𔽓]����
	inline Boolean & Boolean::Reversal()
	{
		mValue = !mValue;
		return *this;
	}

	//�����^�U�l����r����
	inline Boolean Boolean::Equal(const bool & aValue) const
	{
		return operator==(aValue);
	}

	//�����^�U�l����r����
	inline Boolean Boolean::Equal(const Boolean & aValue) const
	{
		return operator==(aValue);
	}

	//�^�U�l�𕶎���ŕԂ�
	inline String Boolean::ToString() const
	{
		if (mValue == true) {
			return "true";
		}
		else {
			return "false";
		}
	}
}