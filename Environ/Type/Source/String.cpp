#include "..\..\GameEngine\Header\Type\String.hpp"
#include "..\..\GameEngine\Header\Type\String.hpp"
#include <Type\String.hpp>

namespace Environ {

	//空文字列で初期化
	String::String():std::string("")
	{
	}

	//キャパシティを指定してから文字列で初期化する
	String::String(const Int aCapacity):std::string("")
	{

		if (aCapacity > 0)std::string::reserve(aCapacity);
	}

	//文字で初期化する
	String::String(const char aObject)
	{
		//charで初期化できるコンストラクタがなかったのでoperator==で代用
		std::string::operator =(aObject);
	}

	//const char*文字列で初期化する
	String::String(const char * aObject):std::string(aObject)
	{
		
	}

	//オブジェクトで初期化する
	String::String(const Object & aObject):std::string(aObject.ToString())
	{
	}

	//オブジェクトで初期化し、キャパシティを設定する
	String::String(const Object & aObject, const Int aCapacity): std::string(aObject.ToString())
	{
		if (aCapacity > 0)std::string::reserve(aCapacity);
	}

	//特になし
	String::~String()
	{
	}

	//const char*文字列ポインタを返す
	String::operator const char*()
	{
		return std::string::c_str();
	}


	//オブジェクトを代入する
	String & String::operator=(const Object & aObject)
	{
		std::string::operator =(aObject.ToString());
		return *this;
	}

	//文字を代入する
	String& String::operator=(const char aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//文字列を代入する
	String& String::operator=(const char* aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//文字列を末尾に追加する
	String & String::operator+=(const Object & aObject)
	{
		std::string::operator +=(aObject.ToString());
		return *this;
	}

	//文字列を末尾に追加する
	String& String::operator+=(const char aObject)
	{
		std::string::operator +=(aObject);
		return *this;

	}

	//文字列を末尾に追加する
	String& String::operator+=(const char* aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//文字列を末尾に追加する
	String& String::operator+=(const String& aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//文字列が等しいか比較する
	Boolean String::operator==(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) == 0;
	}

	//文字列が等しいか比較する
	Boolean String::operator==(const char* aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//文字列が等しいか比較する
	Boolean String::operator==(const String& aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//文字列が等しくないか比較する
	Boolean String::operator!=(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) != 0;
	}


	//文字列が等しくないか比較する
	Boolean String::operator!=(const char* aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//文字列が等しくないか比較する
	Boolean String::operator!=(const String& aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//現在の有効な文字列の長さを返す
	Int String::Length() const
	{
		return std::string::size();
	}

	//指定した位置の文字を取得する
	Char String::At(const Int aIndex) const
	{
		if (aIndex >= 0 && aIndex < std::string::size())return std::string::at(aIndex);

		//範囲外を指定した場合は\0を返す
		return Char();
	}

	//末尾に文字列を追加する
	String & String::Append(const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//末尾に指定範囲文字列を追加する
	String & String::Append(const Object &, const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//文字列を代入する
	String & String::Set(const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定範囲文字列を代入する
	String & String::Set(const Object &, const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//文字列が数字のみで構成されているか調べる
	Boolean String::IsDigits() const
	{
		return Boolean();
	}

	//文字列が半角アルファベットのみで構成されているか調べる
	Boolean String::IsAlpha() const
	{
		return Boolean();
	}

	//文字列が半角アルファベットの大文字のみで構成されているか調べる
	Boolean String::IsUpper() const
	{
		return Boolean();
	}

	//文字列が半角アルファベットの小文字のみで構成されているか調べる
	Boolean String::IsLower() const
	{
		return Boolean();
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にする
	String & String::Uppering()
	{
		// TODO: return ステートメントをここに挿入します
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にする
	String & String::Lowering()
	{
		// TODO: return ステートメントをここに挿入します
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にしたものを取得する
	String String::GetUpper() const
	{
		return String();
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にしたものを取得する
	String String::GetLower() const
	{
		return String();
	}

	//実際の文字列のサイズを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	String & String::Resize(const Int aSize)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//文字列のキャパシティを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	String & String::Reserve(const Int aSize)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定した範囲の文字列を削除する。Between::Stepが有効な値だった場合は、そのステップ幅に従って文字を削除する
	String & String::Erasing(const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定した範囲で文字列を構成する。
	String & String::Subbing(const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定した範囲の文字列を取得する
	String String::GetSub(const Between & aBetween) const
	{
		return String();
	}

	//指定位置に文字列を追加する。
	String & String::Insert(const Int aIndex, const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定位置に文字列を追加する。
	String & String::Insert(const Int aIndex, const Object &, const Between & aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定した範囲を別の文字列で置き換える
	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//指定した範囲を別の文字列で置き換える
	String & String::Replacing(const Between & aReplaceBetween, const String &, const Between & aStringBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	//文字列を検索する
	Int String::Find(const Object &, const Between & aFindBetween)const
	{
		return Int();
	}

	//文字列を検索する
	Int String::Find(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	//文字列を末尾から検索する
	Int String::FindBack(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	//文字列を比較する
	Boolean String::Equal(const Object & aValue) const
	{
		return false;
	}


	//文字列を取得する※非推奨
	String String::ToString() const
	{
		return *this;
	}

}
