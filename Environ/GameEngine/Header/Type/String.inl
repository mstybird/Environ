#pragma once
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

	String::String(const std::string & aObject):std::string(aObject)
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

	//文字を代入する
	String & String::operator=(const std::string & aObject)
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

	String & String::operator+=(const std::string & aObject)
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

	Boolean String::operator==(const std::string & aObject) const
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

	Boolean String::operator!=(const std::string & aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//現在の有効な文字列の長さを返す
	UInt String::Length() const
	{
		return UInt(std::string::size());
	}

	//指定した位置の文字を取得する
	Char String::At(const UInt aIndex) const
	{
		if (aIndex >= 0 && aIndex < std::string::size()) {
			return std::string::at(aIndex);
		}
		//範囲外を指定した場合は\0を返す
		return Char();
	}

	String & String::Append(const char * aObject)
	{
		std::string::append(aObject);
		return *this;
	}

	//末尾に文字列を追加する
	String & String::Append(const Object & aObject)
	{
		std::string::append(aObject.ToString());
		return *this;
	}

	//末尾に指定範囲文字列を追加する
	String & String::Append(const Object & aObject, const Between& aBetween)
	{
		//範囲外チェック
		auto lAppendStr = aObject.ToString();
		auto lStrBetween = aBetween;
		if (lStrBetween.GetStart() < 0) {
			lStrBetween.SetStart(0);
		}
		if (lStrBetween.GetEnd() >= this->Length()) {
			lStrBetween.SetEnd(this->Length() - 1);
		}

		std::string::append(
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);
		return *this;
	}

	String & String::Set(const char * aObject)
	{
		std::string::operator =(aObject);
		return *this;
	}

	//文字列を代入する
	String & String::Set(const Object & aObject)
	{
		std::string::operator =(aObject.ToString());
		return *this;
	}

	//指定範囲文字列を代入する
	String & String::Set(const Object & aObject, const Between& aBetween)
	{
		//範囲外チェック
		auto lAppendStr = aObject.ToString();
		auto lStrBetween = aBetween;
		if (lStrBetween.GetStart() < 0) {
			lStrBetween.SetStart(0);
		}
		if (lStrBetween.GetEnd() >= this->Length()) {
			lStrBetween.SetEnd(this->Length() - 1);
		}

		std::string::assign(
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);
		return *this;
	}

	//文字列が数字のみで構成されているか調べる
	Boolean String::IsDigits() const
	{
		Boolean lDigitFlag = true;
		
		for (auto& lChar : *this) {
			if (::isdigit(lChar) == false) {
				lDigitFlag = false;
				break;
			}
		}

		return lDigitFlag;
	}

	//文字列が半角アルファベットのみで構成されているか調べる
	Boolean String::IsAlpha() const
	{
		Boolean lAlphaFlag = true;

		for (auto& lChar : *this) {
			if (::isalpha(lChar) == false) {
				lAlphaFlag = false;
				break;
			}
		}

		return lAlphaFlag;
	}

	//文字列が半角アルファベットの大文字のみで構成されているか調べる
	Boolean String::IsUpper() const
	{
		Boolean lUpperFlag = true;

		for (auto& lChar : *this) {
			if (::isdigit(lChar) == false) {
				lUpperFlag = false;
				break;
			}
		}

		return lUpperFlag;
	}

	//文字列が半角アルファベットの小文字のみで構成されているか調べる
	Boolean String::IsLower() const
	{
		Boolean lLowerFlag = true;

		for (auto& lChar : *this) {
			if (::isdigit(lChar) == false) {
				lLowerFlag = false;
				break;
			}
		}

		return lLowerFlag;
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にする
	String & String::Uppering()
	{
		for (auto& lChar : *this) {
			::toupper(lChar);
		}
		return *this;
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にする
	String & String::Lowering()
	{
		for (auto& lChar : *this) {
			::tolower(lChar);
		}
		return *this;
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にしたものを取得する
	String String::GetUpper() const
	{
		return String(*this).Uppering();
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にしたものを取得する
	String String::GetLower() const
	{
		return String(*this).Lowering();
	}

	//実際の文字列のサイズを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	String & String::Resize(const UInt aSize)
	{
		if (aSize < 0) {
			std::string::resize(0);
		}
		else {
			std::string::resize(aSize);
		}
		return *this;
	}

	//文字列のキャパシティを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	String & String::Reserve(const UInt aSize)
	{
		if (aSize < 0) {
			std::string::reserve(0);
		}
		else {
			std::string::reserve(aSize);
		}
		return *this;
	}

	String & String::Clear()
	{
		std::string::clear();
		return *this;
	}

	//指定した範囲の文字列を削除する。Between::Stepが有効な値だった場合は、そのステップ幅に従って文字を削除する
	String & String::Erasing(const Between aBetween)
	{
		std::string::erase(aBetween.GetStart(), aBetween.GetEnd() - aBetween.GetStart());
		return *this;
	}

	//指定した範囲で文字列を構成する。
	String & String::Subbing(const Between aBetween)
	{
		*this=std::move(std::string::substr(aBetween.GetStart(), 
			aBetween.GetEnd() - aBetween.GetStart()
			)
		);

		return *this;
	}

	//指定した範囲の文字列を取得する
	String String::GetSub(const Between & aBetween) const
	{
		return std::move(
			std::string::substr(
				aBetween.GetStart(), 
				aBetween.GetEnd() - aBetween.GetStart()
			)
		);
	}

	//指定位置に文字列を追加する。
	String & String::Insert(const UInt aIndex, const Object & aObject)
	{
		std::string::insert(aIndex, aObject.ToString());
		return *this;
	}

	//指定位置に文字列を追加する。
	String & String::Insert(const UInt aIndex, const Object & aObject, const Between & aBetween)
	{
		std::string::insert(
			aIndex, 
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);

		return *this;
	}

	Environ::String& String::Insert(const UInt aIndex, const String& aObject)
	{
		std::string::insert(aIndex, aObject);
		return *this;
	}

	Environ::String& String::Insert(const UInt aIndex, const String& aObject, const Between& aBetween)
	{
		std::string::insert(
			aIndex,
			aObject,
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);

		return *this;
	}

	//指定した範囲を別の文字列で置き換える
	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		std::string::replace(
			aReplaceBetween.GetStart(),
			aReplaceBetween.GetEnd() - aReplaceBetween.GetStart(),
			aObject.ToString()
		);
		return *this;
	}

	//指定した範囲を別の範囲文字列で置き換える
	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject, const Between & aStringBetween)
	{
		std::string::replace(
			aReplaceBetween.GetStart(),
			aReplaceBetween.GetEnd() - aReplaceBetween.GetStart(),
			aObject.ToString(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
			);
		return *this;
	}

	//文字列を検索する
	UInt String::Find(const Object & aObject) const
	{
		
		return std::string::find(aObject.ToString());
	}

	//文字列を検索する
	UInt String::Find(const Object & aObject, const Between & aStringBetween)const
	{
		return std::string::find(
			aObject.ToString(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd()- aStringBetween.GetStart()
			);
	}

	//文字列を検索する
	UInt String::Find(const Object & aObject, const UInt & aStartIndex)const
	{
		return std::string::find(
			aObject.ToString(),
			aStartIndex
		);
	}

	UInt String::Find(const String& aObject) const
	{
		return std::string::find(aObject);
	}

	UInt String::Find(const String& aObject, const Between& aStringBetween) const
	{
		return std::string::find(
			aObject.c_str(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
		);
	}

	UInt String::Find(const String& aObject, const UInt& aStartIndex) const
	{
		return std::string::find(
			aObject,
			aStartIndex
		);
	}

	//文字列を末尾から検索する
	UInt String::FindBack(const Object & aObject, const UInt & aStartIndex)const
	{
		return std::string::rfind(
			aObject.ToString(),
			aStartIndex
		);
	}

	UInt String::FindBack(const String& aObject, const UInt& aStartIndex) const
	{
		return std::string::rfind(
			aObject,
			aStartIndex
		);
	}

	//文字列を比較する
	Boolean String::Equal(const Object & aValue) const
	{
		return this->operator ==(aValue.ToString());
	}


	Boolean String::Equal(const String & aValue) const
	{
		return this->operator ==(aValue);
	}

	Boolean String::Equal(const std::string& aValue) const
	{
		return this->operator ==(aValue);
	}

	Boolean String::Equal(const char *& aValue) const
	{
		return this->operator ==(aValue);
	}


	//文字列を取得する※非推奨
	String String::ToString() const
	{
		return *this;
	}

}
