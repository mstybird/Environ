#pragma once

#include "InterFace\IEquateble.hpp"
#include"Object.hpp"
#include "Integer.hpp"

#include<string>
#include<vector>

namespace Environ {

	class Char;
	class Between;
	class Boolean;

	/**
		@class String
		@brief std::Stringの拡張


		//要注意
		イテレータの兼ね合いで一時的にstd:stringをpublic継承している(修正最重要内容)

	*/
	class String:
		public IEquateble<std::string>,
		public IEquateble<Object>,
		public IEquateble<String>,
		public Object
	{
	public:

		//イテレータ
		using Iteletor = std::vector<Char>::iterator;
		using IteletorConst = std::vector<Char>::const_iterator;
		using IteletorReverse = std::vector<Char>::reverse_iterator;
		using IteletorReverseConst = std::vector<Char>::const_reverse_iterator;



		/**
		@brief 空文字列を作成する
		*/
		String();

		/**
		@brief
		@param キャパシティ。初期化文字列文字数より小さい値を指定した場合は無視される。
		*/
		String(const Int aCapacity);

		/**
		@brief
		@param 初期化文字
		*/
		String(const char aObject);

		/**
		@brief 指定文字列で初期化(内部でpush_backを使っているため遅い)
		@param 初期化文字列
		*/
		String(const char* aObject);

		/**
		@brief
		@param 初期化文字列
		*/
		String(const std::string& aObject);

		/**
		@brief
		@param 初期化文字列
		*/
		String(const Object& aObject);

		/**
		@brief 指定した文字列で初期化
		@param 初期化文字列
		@param キャパシティ。初期化文字列文字数より小さい値を指定した場合は無視される。
		*/
		String(const Object& aObject,const Int aCapacity);

		/**
		@brief
		@param 初期化文字列
		*/
		String(const std::vector<Char>& aObject);


		/**
		@brief 文字列開放処理
		*/
		~String();

		Iteletor begin();
		IteletorConst begin()const;
		IteletorConst cbegin()const;
		IteletorReverse rbegin();
		IteletorReverseConst rcbegin()const;

		Iteletor end();
		IteletorConst end()const;
		IteletorConst cend()const;
		IteletorReverse rend();
		IteletorReverseConst rcend()const;

		/**
		@brief const char*形式の文字列を取得する
		@return この文字列のconst charポインタ
		*/
		operator const char*()const;
		operator const Char*()const;

		//組み込み演算子の都合上、組み込み型を使用
		Char& operator[](int aIndex)const;


		/**
		@brief 指定文字列を代入する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& operator=(const Object& aObject);

		/**
		@brief 指定文字列を代入する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& operator=(const char* aObject);

		/**
		@brief 指定文字を代入する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& operator=(const char aObject);

		/**
		@brief 指定文字列を代入する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& operator=(const std::string& aObject);


		/**
		@brief 末尾に文字列を追加する
		@param	追加文字列オブジェクト
		@return このインスタンスの参照
		*/
		String& operator+=(const Object& aObject);

		/**
		@brief 末尾に文字列を追加する
		@param	追加文字列
		@return このインスタンスの参照
		*/
		String& operator+=(const String& aObject);

		/**
		@brief 末尾に文字列を追加する
		@param	追加文字列
		@return このインスタンスの参照
		*/
		String& operator+=(const std::string& aObject);


		/**
		@brief 末尾に文字列を追加する
		@param	追加文字列オブジェクト
		@return このインスタンスの参照
		*/
		String& operator+=(const char* aObject);

		/**
		@brief 末尾に文字列を追加する
		@param	追加文字列オブジェクト
		@return このインスタンスの参照
		*/
		String& operator+=(const char aObject);


		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return 完全一致すればtrue。それ以外はfalse
		*/
		Boolean operator==(const Object& aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return 完全一致すればtrue。それ以外はfalse
		*/
		Boolean operator==(const char* aObject)const;


		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return 完全一致すればtrue。それ以外はfalse
		*/
		Boolean operator==(const String& aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return 完全一致すればtrue。それ以外はfalse
		*/
		Boolean operator==(const std::string& aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return	完全一致しなければtrue。一致した場合はfalse
		*/
		Boolean operator!=(const Object& aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return	完全一致しなければtrue。一致した場合はfalse
		*/
		Boolean operator!=(const char* aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return	完全一致しなければtrue。一致した場合はfalse
		*/
		Boolean operator!=(const String& aObject)const;

		/**
		@brief	文字列を比較する
		@param	比較用文字列
		@return	完全一致しなければtrue。一致した場合はfalse
		*/
		Boolean operator!=(const std::string& aObject)const;

		/**
		@brief 文字列の長さを取得する
		@return 文字列の長さ(バイト数)
		*/
		UInt Length()const;

		/**
		@brief	指定した位置の文字を取得する
		@param	位置となるインデクス。
		@return 指定インデクスが指す文字。
				範囲外アクセスだった場合は'\0'を返す
		*/
		Char At(const UInt aIndex)const;

		/**
		@brief 末尾に文字列を追加する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& Append(const char* aObject);

		/**
		@brief 末尾に文字列を追加する
		@param 文字列
		@return このインスタンスの参照
		*/
		String& Append(const Object& aObject);

		/**
		@brief	末尾に文字列を追加する
		@param	追加する文字列
		@param	追加する文字列の範囲
		@return このインスタンスの参照
		*/
		String& Append(const Object&, const Between& aBetween);

		/**
		@brief	文字列を代入する
		@param	代入する文字列
		@return このインスタンスの参照
		*/
		String& Set(const char* aObject);

		/**
		@brief	文字列を代入する
		@param	代入する文字列
		@return このインスタンスの参照
		*/
		String& Set(const Object& aObject);

		/**
		@brief
		@param	代入する文字列
		@param	代入する文字列の範囲
		@return このインスタンスの参照
		*/
		String& Set(const Object&, const Between& aBetween);


		/**
		@brief	文字列が数字のみで構成されているか調べる
		@return	数字のみだった場合はtrueを返す
		*/
		Boolean IsDigits()const;

		/**
		@brief	文字列が半角アルファベットのみで構成されているか調べる
		@return	半角アルファベットのみだった場合はtrueを返す
		*/
		Boolean IsAlpha()const;

		/**
		@brief	文字列が半角アルファベットの大文字のみで構成されているか調べる
		@return	半角アルファベットの大文字のみだった場合trueを返す
		*/
		Boolean IsUpper()const;

		/**
		@brief	文字列が半角アルファベットの小文字のみで構成されているか調べる
		@return	半角アルファベットの小文字のみだった場合trueを返す
		*/
		Boolean IsLower()const;


		/**
		@brief	この文字列に含まれる半角アルファベットをすべて大文字にする
		@return このインスタンスの参照
		*/
		String& Uppering();

		/**
		@brief	この文字列に含まれる半角アルファベットをすべて小文字にする
		@return このインスタンスの参照
		*/
		String& Lowering();

		/**
		@brief	この文字列に含まれる半角アルファベットをすべて大文字にしたものを取得する
		@return 変換された文字列
		*/
		String  GetUpper()const;

		/**
		@brief	この文字列に含まれる半角アルファベットをすべて小文字にしたものを取得する
		@return 変換された文字列
		*/
		String  GetLower()const;


		/**
		@brief	実際の文字列のサイズを変更する。既にある文字列サイズより小さい値を指定した場合は、そのサイズの差分の文字列を消失する
		@param	変更後のサイズ
		@return このインスタンスの参照
		*/
		String& Resize(const UInt aSize);

		/**
		@brief	文字列のキャパシティを変更する。既にある文字列サイズより小さい値を指定した場合は、変化しない
		@param	変更後のキャパシティ
		@return このインスタンスの参照
		*/
		String& Reserve(const UInt aSize);

		/**
		@brief	文字列をすべて削除する
		@return このインスタンスの参照
		*/
		String& Clear();

		/**
		@brief	指定した範囲の文字列を削除する。Between::Stepは現状無視される
		@param	範囲指定インスタンス
		@return このインスタンスの参照
		*/
		String& Erasing(const Between& aBetween);


		/**
		@brief	指定した範囲で文字列を構成する。
				Between::Stepは現状無視される
				無効な範囲だった場合(開始インデクスが-1等)は、有効な範囲に収まるように調整される。
			
		@param	範囲指定インスタンス
		@return このインスタンスの参照
		*/
		String& Subbing(const Between& aBetween);


		/**
		@brief	指定した範囲の文字列を取得する
				Between::Stepは現状無視される
				無効な範囲だった場合(開始インデクスが-1等)は、有効な範囲に収まるように調整される。
		@param	範囲指定インスタンス
		@return	範囲文字列
		*/
		String GetSub(const Between& aBetween)const;


		/**
		@brief	指定位置に文字列を追加する。
		@param	追加する位置。無効なインデクスを指定した場合は先頭or末尾に追記される。
		@param	追加する文字列
		@return このインスタンスの参照
		*/
		String& Insert(const UInt aIndex,const Object& aObject);

		/**
		@brief	指定位置に文字列を追加する。
		@param	追加する位置。無効なインデクスを指定した場合は先頭or末尾に追記される。
		@param	追加する文字列
		@param	追加する文字列の範囲指定インスタンス
		@return このインスタンスの参照
		*/
		String& Insert(const UInt aIndex,const Object&, const Between& aBetween);

		/**
		@brief	指定位置に文字列を追加する。
		@param	追加する位置。無効なインデクスを指定した場合は先頭or末尾に追記される。
		@param	追加する文字列
		@return このインスタンスの参照
		*/
		String& Insert(const UInt aIndex, const String& aObject);

		/**
		@brief	指定位置に文字列を追加する。
		@param	追加する位置。無効なインデクスを指定した場合は先頭or末尾に追記される。
		@param	追加する文字列
		@param	追加する文字列の範囲指定インスタンス
		@return このインスタンスの参照
		*/
		String& Insert(const UInt aIndex, const String&, const Between& aBetween);


		/**
		@brief	指定した範囲を別の文字列で置き換える
		@param	置き換える範囲。無効な範囲だった場合、先頭or末尾を範囲の先頭・終端に設定される。
		@param	置き換える文字列
		@return このインスタンスの参照
		*/
		String& Replacing(const Between& aReplaceBetween, const Object& aObject);

		/**
		@brief	指定した範囲を別の文字列で置き換える
		@param	置き換える範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@param	置き換える文字列
		@param	置き換える文字列の範囲
		@return このインスタンスの参照
		*/
		String& Replacing(const Between& aReplaceBetween, const Object&, const Between& aStringBetween);

		/**
		@brief	指定した範囲を別の文字列で置き換える
		@param	置き換える範囲。無効な範囲だった場合、先頭or末尾を範囲の先頭・終端に設定される。
		@param	置き換える文字列
		@return このインスタンスの参照
		*/
		String& Replacing(const Between& aReplaceBetween, const String& aObject);

		/**
		@brief	指定した範囲を別の文字列で置き換える
		@param	置き換える範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@param	置き換える文字列
		@param	置き換える文字列の範囲
		@return このインスタンスの参照
		*/
		String& Replacing(const Between& aReplaceBetween, const String&aObject, const Between& aStringBetween);

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt Find(const Object& aObject)const;

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索する文字列の範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
				見つからなかった場合は、-1
		*/
		UInt Find(const Object& aObject, const Between& aStringBetween)const;

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索開始位置。無効な位置だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt Find(const Object& aObject, const UInt& aStartIndex)const;

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt Find(const String& aObject)const;

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索する文字列の範囲。無効な範囲だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt Find(const String& aObject, const Between& aStringBetween)const;

		/**
		@brief	文字列を検索する
		@param	検索文字列
		@param	検索開始位置。無効な位置だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt Find(const String& aObject, const UInt& aStartIndex)const;



		/**
		@brief	文字列を末尾から検索する
		@param	検索文字列
		@param	検索開始位置。末尾を0とする。無効な位置だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt FindBack(const Object& aObject, const UInt& aStartIndex)const;

		/**
		@brief	文字列を末尾から検索する
		@param	検索文字列
		@param	検索開始位置。末尾を0とする。無効な位置だった場合は、文字列の先頭・終端に自動的に修正される。
		@return	見つかった場合その見つかった文字列の先頭となるインデクス。
		見つからなかった場合は、-1
		*/
		UInt FindBack(const String& aObject, const UInt& aStartIndex)const;



		/**
		@brief	文字列を比較する
		@param	比較文字列
		@return	完全一致すればtrourが返る。
		*/
		virtual Boolean Equal(const Object& aValue)const override;

		/**
		@brief	文字列を比較する
		@param	比較文字列
		@return	完全一致すればtrourが返る。
		*/
		virtual Boolean Equal(const String& aValue)const override;

		virtual Boolean Equal(const std::string& aValue) const override;

		/**
		@brief	文字列を比較する
		@param	比較文字列
		@return	完全一致すればtrourが返る。
		*/
		virtual Boolean Equal(const char*& aValue) const;


		/**
		@brief	インデックスがこの文字列の範囲内に収まるか調べる
		@param	範囲指定Between
		@return	範囲内ならtrue。範囲外ならfalse
		*/
		bool IsRange(const Between& aBetween)const;


		/**
		@brief	インデックスがこの文字列の範囲内に収まるか調べる
		@param	インデックス
		@return	範囲内ならtrue。範囲外ならfalse
		*/
		bool IsRange(const UInt& aIndex)const;


	private:
		/**
		@brief	文字列を取得する※非推奨
		@param	比較文字列
		@return	完全一致すればtrourが返る。
		*/
		[[deprecated]]
		virtual String ToString() const override;

		std::vector<Char> mValue;	//内部で扱う文字列インスタンス

	protected:
	};
}

