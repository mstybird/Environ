#include "..\..\GameEngine\Header\Type\Char.hpp"
#include "..\..\GameEngine\Header\Type\Char.hpp"
#include <Type/Char.hpp>
#include <Type\String.hpp>
#include<cuchar>

namespace Environ {

	//文字の初期化
	Environ::Char::Char():Char('\0'){}

	//マルチバイト文字の初期化
	Char::Char(const char aChara):mValue(aChara){}

	Char::operator char()const
	{
		return mValue;
	}

	//文字代入処理
	Char& Char::operator=(const char & aChara)
	{
		mValue=aChara;
		return *this;
	}

	//文字比較処理
	bool Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//文字比較処理
	bool Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//文字比較処理(否定)
	bool Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//文字比較処理(否定)
	bool Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//数値かどうか
	bool Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//空白文字かどうか
	bool Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}

	//アルファベットかどうか
	bool Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//アルファベット大文字かどうか
	bool Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//アルファベット小文字かどうか
	bool Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null文字(0)かどうか調べる
	bool Char::IsNull()const
	{
		
		return mValue == 0;
	}

	//アルファベットを小文字に変換
	Char & Char::ToLower()
	{
		mValue = ::tolower(mValue);
		return *this;
	}

	//アルファベットを大文字に変換
	Char & Char::ToUpper()
	{
		mValue = ::toupper(mValue);
		return *this;
	}


	//文字比較処理
	bool Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//文字比較処理
	bool Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//文字列に変換する
	String Char::ToString() const
	{
		return String(mValue);
	}
}