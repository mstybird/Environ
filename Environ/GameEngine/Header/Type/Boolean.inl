#pragma once

namespace Environ {


	//falseで初期化
	inline Boolean::Boolean():mValue(false)
	{
	}

	//指定したbool値で初期化
	inline Boolean::Boolean(const bool aValue):mValue(aValue)
	{
	}

	//開放処理現在何もしない
	inline Boolean::~Boolean()
	{
	}

	//変更可能なboolインスタンスを返す
	inline Boolean::operator bool() const
	{
		return mValue;
	}

	//変更不可能なconst参照を返す
	inline Boolean::operator const bool&() const
	{
		return mValue;
	}

	//同じ真偽値か比較する
	inline Boolean Boolean::operator==(const bool aValue)const
	{
		return mValue == aValue;
	}

	//異なる真偽値か比較する
	inline Boolean Boolean::operator!=(const bool aValue)const
	{
		return mValue != aValue;
	}

	//同じ真偽値か比較する
	inline Boolean Boolean::operator==(const Boolean aValue)const
	{
		return mValue == aValue.mValue;
	}

	//異なる真偽値か比較する
	inline Boolean Boolean::operator!=(const Boolean aValue)const
	{
		return mValue != aValue.mValue;
	}

	//trueか調べる
	inline Boolean Boolean::IsTrue()const
	{
		return mValue == true;
	}

	//falseか調べる
	inline Boolean Boolean::IsFalse()const
	{
		return mValue == false;
	}

	//真偽値を反転する
	inline Boolean & Boolean::Reversal()
	{
		mValue = !mValue;
		return *this;
	}

	//同じ真偽値か比較する
	inline Boolean Boolean::Equal(const bool & aValue) const
	{
		return operator==(aValue);
	}

	//同じ真偽値か比較する
	inline Boolean Boolean::Equal(const Boolean & aValue) const
	{
		return operator==(aValue);
	}

	//真偽値を文字列で返す
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