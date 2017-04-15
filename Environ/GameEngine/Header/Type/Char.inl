#pragma once
#include<cuchar>

namespace Environ {

	//文字の初期化
	inline Environ::Char::Char():Char('\0'){}

	//マルチバイト文字の初期化
	inline Char::Char(const char aChara):mValue(aChara){}

	inline Char::operator char()const
	{
		return mValue;
	}

	//文字代入処理
	inline Char& Char::operator=(const char & aChara)
	{
		mValue=aChara;
		return *this;
	}

	//文字比較処理
	inline Boolean Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//文字比較処理
	inline Boolean Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//文字比較処理(否定)
	inline Boolean Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//文字比較処理(否定)
	inline Boolean Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//数値かどうか
	inline Boolean Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//空白文字かどうか
	inline Boolean Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}

	//アルファベットかどうか
	inline Boolean Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//アルファベット大文字かどうか
	inline Boolean Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//アルファベット小文字かどうか
	inline Boolean Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null文字(0)かどうか調べる
	inline Boolean Char::IsNull()const
	{
		
		return mValue == 0;
	}

	//アルファベットを小文字に変換
	inline Char & Char::ToLower()
	{
		mValue = static_cast<char>(::tolower(mValue));
		return *this;
	}

	//アルファベットを大文字に変換
	inline Char & Char::ToUpper()
	{
		mValue = static_cast<char>(::toupper(mValue));
		return *this;
	}


	//文字比較処理
	inline Boolean Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//文字比較処理
	inline Boolean Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//文字列に変換する
	inline String Char::ToString() const
	{
		return String(mValue);
	}
}