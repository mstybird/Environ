#pragma once
#include"String.hpp"
#include"Boolean.hpp"
#include"BetweenValue.hpp"
#include"Char.hpp"
#include<algorithm>

//終端に必ず\0を入れるため、サイズは必ず内部的には1多い形になる
//必ずサイズ1以上となる
//代入処理以外は終端に\0が入っている前提でコードを書いて良い
//末尾に\0が入らない場合が考えられるものは、\0チェックを行う

namespace Environ {

	//空文字列で初期化
	inline String::String():mValue { '\0' }
	{
		
	}

	//キャパシティを指定してから文字列で初期化する
	inline String::String(const Int aCapacity):mValue{ '\0' }
	{
		//必ずnull文字分別確保のため+1
		if (aCapacity > 0)mValue.reserve(aCapacity + 1);
	}

	//文字で初期化する
	inline String::String(const char aObject):mValue{aObject,'\0'}
	{
	}

	//const char*文字列で初期化する
	inline String::String(const char * aObject):mValue()
	{
		//ポインタがnullなら終端文字のみ入れる
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}

		//終端文字にたどり着くまで代入
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		mValue.push_back('\0');
	}

	inline String::String(const std::string & aObject): mValue(aObject.begin(),aObject.end())
	{
		mValue.push_back('\0');
	}

	//オブジェクトで初期化する
	inline String::String(const Object & aObject)
	{
		auto lObjectStr = aObject.ToString();
		mValue.reserve(lObjectStr.Length());
		for (auto& lChar : lObjectStr) {
			mValue.push_back(lChar);
			mValue.push_back('\0');
		}
	}

	//オブジェクトで初期化し、キャパシティを設定する
	inline String::String(const Object & aObject, const Int aCapacity)
	{
		auto lObjectStr = aObject.ToString();
		mValue.reserve(lObjectStr.Length());
		for (auto& lChar : lObjectStr) {
			mValue.push_back(lChar);
		}
		mValue.push_back('\0');
	
		//必ずnull文字分別確保のため+1
		if (aCapacity+1 > mValue.size())mValue.reserve(aCapacity+1);

	}

	inline String::String(const std::vector<Char>& aObject):mValue(std::move(aObject))
	{

	}



	//特になし
	inline String::~String()
	{
	}

	//const char*文字列ポインタを返す
	inline String::operator const char*()const
	{
		return reinterpret_cast<const char*>(mValue.data());
	}

	inline String::operator const Char*() const
	{
		return mValue.data();
	}


	//オブジェクトを代入する
	inline String & String::operator=(const Object & aObject)
	{
		//Setメソッドを利用
		return this->Set(aObject);
	}

	//文字を代入する
	inline String& String::operator=(const char aObject)
	{
		mValue.clear();
		mValue.push_back(aObject);
		return *this;

	}

	//文字を代入する
	inline String & String::operator=(const std::string & aObject)
	{
		//現在の文字列を初期化
		mValue.clear();

		//末尾に代入
		std::copy(aObject.begin(), aObject.end(), std::back_inserter(mValue));
		//\0じゃなければ終端文字代入
		if (mValue.back() == '\0')mValue.push_back('\0');
		return *this;
	}

	//文字列を代入する
	inline String& String::operator=(const char* aObject)
	{
		//Setメソッドを利用
		return this->Set(aObject);


	}

	//文字列を末尾に追加する
	inline String & String::operator+=(const Object & aObject)
	{
		//Appendメソッドを利用
		return this->Append(aObject);
	}

	//文字列を末尾に追加する
	inline String& String::operator+=(const char aObject)
	{
		//一時的に終端文字を取り除く
		mValue.pop_back();
		mValue.push_back(aObject);
		//終端文字代入
		mValue.push_back('\0');
		return *this;

	}

	//文字列を末尾に追加する
	inline String& String::operator+=(const char* aObject)
	{
		//Apendメソッドを利用
		return this->Append(aObject);
	}

	//文字列を末尾に追加する
	inline String& String::operator+=(const String& aObject)
	{
		//終端文字を一時的に取り除く
		mValue.pop_back();
		std::copy(aObject.mValue.begin(), aObject.mValue.end(), std::back_inserter(mValue));
		//Environ::Stringは必ず終端が\0なので別で\0を代入する必要は無し

		return *this;
	}

	//文字列を末尾に追加する
	inline String & String::operator+=(const std::string & aObject)
	{
		//終端文字を一時的に取り除く
		mValue.pop_back();

		std::copy(aObject.begin(), aObject.end(), std::back_inserter(mValue));
		//\0は勝手に入れてくれないので\0追加
		mValue.push_back('\0');
		return *this;
	}

	//文字列が等しいか比較する
	inline Boolean String::operator==(const Object & aObject)const
	{
		//operator==(String)に処理を任せる
		return *this == aObject.ToString();
	}

	//文字列が等しいか比較する
	inline Boolean String::operator==(const char* aObject) const
	{
		//nullであればfalse
		if (aObject == nullptr)return false;
		//1文字ずつチェック
		Boolean lResult = true;
		for (const auto& lChar : mValue) {
			//終端文字にたどり着いた場合
			if (lChar == '\0') {
				//なおかつ比較対象も終端文字だったら一致
				break;
			}

			//終端文字なら不一致(false)
			//比較対象文字列の方が短い場合に起こりうる
			if (*aObject == '\0') {
				lResult = false;
				break;
			}
			//異なる文字なら不一致
			if (lChar != *aObject) {
				lResult = false;
				break;
			}
		}

		return lResult;
	}

	//文字列が等しいか比較する
	inline Boolean String::operator==(const String& aObject) const
	{
		return mValue == aObject.mValue;
	}

	inline Boolean String::operator==(const std::string & aObject) const
	{
		return std::equal(this->cbegin(),this->cend(),aObject.cbegin(),aObject.cend());
	}

	//文字列が等しくないか比較する
	inline Boolean String::operator!=(const Object & aObject)const
	{
		//operator==(Object)を利用
		return !(*this==aObject);
	}


	//文字列が等しくないか比較する
	inline Boolean String::operator!=(const char* aObject) const
	{
		//operator==(const char*)を利用
		return !(*this == aObject);
	}

	//文字列が等しくないか比較する
	inline Boolean String::operator!=(const String& aObject) const
	{
		return mValue != aObject.mValue;
	}

	inline Boolean String::operator!=(const std::string & aObject) const
	{
		//operator==(std::string)を利用
		return *this == aObject;
	}

	//現在の有効な文字列の長さを返す
	inline UInt String::Length() const
	{
		return static_cast<uint32_t>(mValue.size());
	}

	//指定した位置の文字を取得する
	inline Char String::At(const UInt aIndex) const
	{
		if (aIndex >= 0 && aIndex < mValue.size()) {
			return mValue.at(aIndex);
		}
		
		//範囲外を指定した場合は\0を返す
		return Char();
		
	}

	inline String & String::Append(const char * aObject)
	{
		//ポインタがnullなら何もしない
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}
		//終端文字を一時的に取り除く
		mValue.pop_back();

		//終端文字にたどり着くまで代入
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		//終端文字代入
		mValue.push_back('\0');
		return *this;
	}

	//末尾に文字列を追加する
	inline String & String::Append(const Object & aObject)
	{
		//終端文字取り除く
		mValue.pop_back();
		auto lObjectStr = aObject.ToString();
		//末尾に代入
		std::copy(lObjectStr.begin(), lObjectStr.end(), std::back_inserter(mValue));
		return *this;
	}

	//末尾に指定範囲文字列を追加する
	inline String & String::Append(const Object & aObject, const Between& aBetween)
	{
		//範囲外チェック
		auto lAppendStr = aObject.ToString();
		auto lStrBetween = aBetween;
		//開始インデックスが0未満は0に補正
		if (lStrBetween.GetStart() < 0) {
			lStrBetween.SetStart(0);
		}

		//終端インデックスが文字列の長さより長い場合は末尾文字インデックスに補正
		if (lStrBetween.GetEnd() >= lAppendStr.Length()) {
			lStrBetween.SetEnd(this->Length() - 1);
		}
		auto lIteratorStr = lAppendStr.begin();

		//末尾の\0を削除
		mValue.pop_back();
		//範囲文字列を追記
		std::copy(
			lIteratorStr + aBetween.GetStart(),
			lIteratorStr + aBetween.GetEnd(),
			std::back_inserter(mValue)
		);
		//終端文字代入
		mValue.push_back('\0');


		return *this;
	}

	inline String & String::Set(const char * aObject)
	{
		mValue.clear();
		//ポインタがnullなら終端文字のみ入れる
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}

		//終端文字にたどり着くまで代入
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		//終端文字代入
		mValue.push_back('\0');
		return *this;
	}

	//文字列を代入する
	inline String & String::Set(const Object & aObject)
	{
		//コンストラクタを通った際に\0が末尾にある
		mValue = std::move(aObject.ToString().mValue);
		return *this;
	}

	//指定範囲文字列を代入する
	inline String & String::Set(const Object & aObject, const Between& aBetween)
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

		//範囲文字列を追記
		auto lIteratorStr = lAppendStr.begin();
		//一度文字列をクリア
		mValue.clear();
		std::copy(
			lIteratorStr + aBetween.GetStart(),
			lIteratorStr + aBetween.GetEnd(),
			std::back_inserter(mValue)
		);
		//終端文字代入
		mValue.push_back('\0');


		return *this;
	}

	//文字列が数字のみで構成されているか調べる
	inline Boolean String::IsDigits() const
	{
		Boolean lDigitFlag = true;
		
		//1文字ずつチェック
		for (auto& lChar : *this) {
			if (lChar.IsDigit()==false) {
				lDigitFlag = false;
				break;
			}
		}

		return lDigitFlag;
	}

	//文字列が半角アルファベットのみで構成されているか調べる
	inline Boolean String::IsAlpha() const
	{
		
		Boolean lAlphaFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsAlpha() == false) {
				lAlphaFlag = false;
				break;
			}
		}

		return lAlphaFlag;
	}

	//文字列が半角アルファベットの大文字のみで構成されているか調べる
	inline Boolean String::IsUpper() const
	{
		Boolean lUpperFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsUpper() == false) {
				lUpperFlag = false;
				break;
			}
		}

		return lUpperFlag;
	}

	//文字列が半角アルファベットの小文字のみで構成されているか調べる
	inline Boolean String::IsLower() const
	{
		Boolean lLowerFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsLower() == false) {
				lLowerFlag = false;
				break;
			}
		}

		return lLowerFlag;
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にする
	inline String & String::Uppering()
	{
		for (auto& lChar : *this) {
			lChar.ToUpper();
		}
		return *this;
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にする
	inline String & String::Lowering()
	{
		for (auto& lChar : *this) {
			::tolower(lChar);
		}
		return *this;
	}

	//この文字列に含まれる半角アルファベットをすべて大文字にしたものを取得する
	inline String String::GetUpper() const
	{
		return String(*this).Uppering();
	}

	//この文字列に含まれる半角アルファベットをすべて小文字にしたものを取得する
	inline String String::GetLower() const
	{
		return String(*this).Lowering();
	}

	//実際の文字列のサイズを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	inline String & String::Resize(const UInt aSize)
	{
		if (aSize < 0) {
			mValue.resize(0);
		}
		else {
			mValue.resize(aSize);
		}
		return *this;
	}

	//文字列のキャパシティを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
	inline String & String::Reserve(const UInt aSize)
	{
		if (aSize < 0) {
			mValue.reserve(0);
		}
		else {
			mValue.reserve(aSize);
		}
		
		return *this;
	}

	//文字列クリア
	inline String & String::Clear()
	{
		mValue.clear();
		//\0だけ入れておく
		mValue.push_back('\0');
		return *this;
	}

	//指定した範囲の文字列を削除する。Between::Stepが有効な値だった場合は、そのステップ幅に従って文字を削除する
	inline String & String::Erasing(const Between& aBetween)
	{
		//有効範囲チェック
		if (this->IsRange(aBetween) == false)return *this;
		//刻み値が無効な値(未設定、不正値)であれば//範囲remove
		Iteletor lRemoveIt;
		if (aBetween.GetStep() > 1 && aBetween.GetStep() < this->Length()) {
			mValue.erase(
				this->begin() + aBetween.GetStart(),
				this->begin() + aBetween.GetEnd()
				);
		}
		//有効な値だった場合、範囲remove_if
		else {
			//刻み値チェックカウンタ
			int lRemoveCounter{ 0 };
			lRemoveIt = std::remove_if(
				this->begin()+ aBetween.GetStart(), 
				this->begin()+aBetween.GetEnd(),
				[&lRemoveCounter,&aBetween, this](const auto) {
				auto lNotRemove = lRemoveCounter == 0;
				++lRemoveCounter;
				lRemoveCounter %= aBetween.GetStep();
				return lNotRemove;
			});

			mValue.erase(lRemoveIt, this->end());
			mValue.push_back('\0');

		}
		return *this;
	}

	//指定した範囲で文字列を構成する。
	inline String & String::Subbing(const Between& aBetween)
	{
		//範囲チェック
		if (this->IsRange(aBetween) == false)return *this;

		decltype(mValue) lTemp;
		lTemp.reserve(aBetween.GetEnd() - aBetween.GetStart() + 1);

		std::copy(
			mValue.begin() + aBetween.GetStart(),
			mValue.begin() + aBetween.GetEnd(),
			std::back_inserter(lTemp)
		);
		lTemp.push_back('\0');
		//ここで初めて文字列再構成反映
		mValue = std::move(lTemp);

		return *this;
	}

	//指定した範囲の文字列を取得する
	inline String String::GetSub(const Between & aBetween) const
	{
		//範囲チェック
		if (this->IsRange(aBetween) == false)return *this;

		decltype(mValue) lTemp;
		lTemp.reserve(aBetween.GetEnd() - aBetween.GetStart() + 1);

		std::copy(
			mValue.begin() + aBetween.GetStart(),
			mValue.begin() + aBetween.GetEnd(),
			std::back_inserter(lTemp)
		);
		lTemp.push_back('\0'); 
		//実体コピーはなし。コンストラクタ内でムーブしている
		return lTemp;
	}

	//指定位置に文字列を追加する。
	inline String & String::Insert(const UInt aIndex, const Object & aObject)
	{
		return this->Insert(aIndex, aObject.ToString());
	}

	//指定位置に文字列を追加する。
	inline String & String::Insert(const UInt aIndex, const Object & aObject, const Between & aBetween)
	{
		return this->Insert(aIndex, aObject.ToString(),aBetween);
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject)
	{
		//範囲チェック
		if (IsRange(aIndex) == false)return *this;
		this->Reserve(this->Length() + aObject.Length());

		mValue.insert(this->begin() + aIndex, aObject.begin(), aObject.end());

		return *this;
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject, const Between& aBetween)
	{
		//範囲チェック
		if (IsRange(aIndex) == false)return *this;


		//挿入文字列の範囲内か調べる
		if (aObject.IsRange(aBetween) == false)return *this;

		this->Reserve(this->Length() + aObject.Length());


		mValue.insert(
			this->begin() + aIndex,
			aObject.begin() + aBetween.GetStart(),
			aObject.begin() + aBetween.GetEnd()
		);

		return *this;
	}

	//指定した範囲を別の文字列で置き換える
	inline String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		return this->Replacing(aReplaceBetween, aObject.ToString());
	}

	//指定した範囲を別の範囲文字列で置き換える
	inline String & String::Replacing(const Between & aReplaceBetween, const Object & aObject, const Between & aStringBetween)
	{
		return this->Replacing(aReplaceBetween, aObject.ToString());
	}

	inline String & String::Replacing(const Between & aReplaceBetween, const String & aObject)
	{
		//範囲チェック
		if (IsRange(aReplaceBetween) == false)return *this;

		//不要文字列の削除
		mValue.erase(
			aObject.begin() + aReplaceBetween.GetStart(),
			aObject.begin() + aReplaceBetween.GetEnd()
		);
		//文字列挿入
		return this->Insert(aReplaceBetween.GetStart(), aObject);
	}

	inline String & String::Replacing(const Between & aReplaceBetween, const String & aObject, const Between & aStringBetween)
	{
		//範囲チェック
		if (IsRange(aReplaceBetween) == false)return *this;
		if (aObject.IsRange(aStringBetween) == false)return *this;

		//不要文字列の削除
		mValue.erase(
			aObject.begin() + aReplaceBetween.GetStart(),
			aObject.begin() + aReplaceBetween.GetEnd()
		);
		//文字列挿入
		this->Insert(
			aReplaceBetween.GetStart(), 
			aObject,aStringBetween);

	}

	//文字列を検索する
	inline UInt String::Find(const Object & aObject) const
	{
		return this->Find(aObject.ToString());
	}

	//文字列を検索する
	inline UInt String::Find(const Object & aObject, const Between & aStringBetween)const
	{
		return this->Find(aObject.ToString(), aStringBetween);
	}

	//文字列を検索する
	inline UInt String::Find(const Object & aObject, const UInt & aStartIndex)const
	{
		return this->Find(aObject.ToString(),aStartIndex);
	}


	inline UInt String::Find(const String& aObject) const
	{
		//無駄があるので余裕があれば最適化する by mstybird 2017/04/18

		UInt lResult = this->Length();
		UInt lThisLoopCount = this->Length() - aObject.Length();
		for (auto i = 0; i < lThisLoopCount; ++i) {
			//次のループが終えるまでにtrueであれば、一致する文字列が見つかったということ
			UInt j;
			for (j = 0; j < aObject.Length(); ++j) {
				//このインスタンスの文字列が検索文字列より短い場合、見つからないのでfalse
				if (lThisLoopCount - i < aObject.Length()) {
					break;
				}

				//文字単位で一致しているか調べる
				if (At(i + j) != aObject.At(j)) {
					break;
				}

				//ループを回りきっていると発見
				if (j == aObject.Length()) {
					lResult = i;
					break;
				}
			}

			//lResultがこの文字列の長さ以外になっていれば(更新されている)発見
			if (lResult != this->Length())break;

		}

		return static_cast<uint32_t>(lResult);
	}

	inline UInt String::Find(const String& aObject, const Between& aStringBetween) const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject.c_str(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
		));
	}

	inline UInt String::Find(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject,
			aStartIndex
		));
	}

	//文字列を末尾から検索する
	inline UInt String::FindBack(const Object & aObject, const UInt & aStartIndex)const
	{
		return static_cast<uint32_t>(mValue.rfind(
			aObject.ToString(),
			aStartIndex
		));
	}

	inline UInt String::FindBack(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(mValue.rfind(
			aObject,
			aStartIndex
		));
	}

	//文字列を比較する
	inline Boolean String::Equal(const Object & aValue) const
	{
		return this->operator ==(aValue.ToString());
	}


	inline Boolean String::Equal(const String & aValue) const
	{
		return this->operator ==(aValue);
	}

	inline Boolean String::Equal(const std::string& aValue) const
	{
		return this->operator ==(aValue);
	}

	inline Boolean String::Equal(const char *& aValue) const
	{
		return this->operator ==(aValue);
	}

	inline bool String::IsRange(const Between & aBetween)const
	{
		if (aBetween.GetStart() < 0 || aBetween.GetEnd() - Length())return false;
		if (aBetween.GetStart() <= aBetween.GetEnd() && aBetween.GetEnd() < Length())return false;

		return true;
	}



	inline bool String::IsRange(const UInt & aIndex) const
	{
		return aIndex >= 0 && aIndex < Length();
	}

	//文字列を取得する※非推奨
	inline String String::ToString() const
	{
		return *this;
	}

}
