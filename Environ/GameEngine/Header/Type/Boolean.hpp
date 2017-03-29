#pragma once
#include "InterFace\IEquateble.hpp"
#include "Object.hpp"
//#include"String.hpp"
/**
	@file Boolean.hpp
	@date Create for 2017/03/14 16:07

	@author msty

	@brief bool型拡張
*/

namespace Environ {
	/**
		@class Boolean
		@brief bool型拡張クラス
	*/
	class String;
	class Boolean:
		public Object,
		public IEquateble<bool>,
		public IEquateble<Boolean>
	{
	public:

		/**
		@brief falseで初期化する
		*/		
		Boolean();

		/**
		@brief 指定した真偽値で指定する
		@param 初期化する真偽値
		*/
		Boolean(const bool aValue);

		/**
		@brief	開放処理(現在処理は無し)
		*/
		~Boolean();


		/**
		@brief 変更可能なboolインスタンスを取得する
		@return このインスタンスの現在のbool値
		*/
		operator bool()const;

		/**
		@brief	変更不可能なbool参照を返す
		@param	このインスタンスのconst参照された現在のbool値
		@return	このインスタンスの現在のbool値のconst参照
		*/
		operator const bool&()const;


		/**
		@brief	bool値と比較する
		@param	比較対象のbool値
		@return	ともに同じ真偽値ならtrue
		*/
		Boolean operator==(const bool aValue)const;

		/**
		@brief	bool値と比較する
		@param	比較対象のbool値
		@return	ともに違う真偽値ならtrue
		*/
		Boolean operator!=(const bool aValue)const;


		/**
		@brief	別のBoolean値と比較する
		@param	比較対象のBoolean値
		@return	ともに同じ真偽値ならtrue
		*/
		Boolean operator==(const Boolean aValue)const;

		/**
		@brief	別のBoolean値と比較する
		@param	比較対象のBoolean値
		@return	ともに違う真偽値ならtrue
		*/
		Boolean operator!=(const Boolean aValue)const;


		/**
		@brief	現在の真偽値がtrueか調べる
		@return	trueならtrueを返す
		*/
		Boolean IsTrue()const;

		/**
		@brief	現在の真偽値がfalseか調べる
		@return	falseならtrueを返す
		*/
		Boolean IsFalse()const;

		/**
		@brief	真偽値を反転する
		@return	反転されたBooleanインスタンスの参照
		*/
		Boolean& Reversal();


		/**
		@brief	bool値と比較する
		@param	比較対象のbool値
		@return
		*/
		virtual Boolean Equal(const bool& aValue)const override;

		/**
		@brief	bool値と比較する
		@param	比較対象のBoolean値
		@return
		*/
		virtual Boolean Equal(const Boolean& aValue)const override;


		/**
		@brief	真偽値に応じた文字列を返す
		@return	trueなら"true",falseなら"false"
		*/
		virtual String ToString()const override;

	protected:
	private:
	
		bool mValue; /*< 内部保持しているbool値*/
	};
}
