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
	Boolean Char::operator==(const char & aChara)const
	{
		return mValue==aChara;
	}

	//文字比較処理
	Boolean Char::operator==(const Char & aChara)const
	{
		return operator==(aChara.mValue);
	}

	//文字比較処理(否定)
	Boolean Char::operator!=(const char & aChara)const
	{
		return mValue != aChara;
	}

	//文字比較処理(否定)
	Boolean Char::operator!=(const Char & aChara)const
	{
		return operator!=(aChara.mValue);
	}

	//数値かどうか
	Boolean Char::IsDigit()const
	{
		return ::isdigit(mValue) != 0;
	}

	//空白文字かどうか
	Boolean Char::IsSpace()const
	{
		return ::isspace(mValue) != 0;
	}

	//アルファベットかどうか
	Boolean Char::IsAlpha()const
	{
		return ::isalpha(mValue) != 0;
	}

	//アルファベット大文字かどうか
	Boolean Char::IsUpper()const
	{
		return ::isupper(mValue) != 0;
	}

	//アルファベット小文字かどうか
	Boolean Char::IsLower()const
	{
		return ::islower(mValue) != 0;
	}

	//null文字(0)かどうか調べる
	Boolean Char::IsNull()const
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
	Boolean Char::Equal(const char & aValue) const
	{
		return operator==(aValue);
	}

	//文字比較処理
	Boolean Char::Equal(const Char & aValue) const
	{
		return operator==(aValue);
	}

	//文字列に変換する
	String Char::ToString() const
	{
		return String(mValue);
	}
}