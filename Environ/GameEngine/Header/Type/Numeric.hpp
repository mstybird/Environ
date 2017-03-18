#pragma once
/**
	@file Numeric.hpp
	@date Create for 2017/03/08 11:32

	@author msty

	@brief 全ての組み込み数値型の共通となるクラス
	デバッグビルドでのパフォーマンスを維持するためにインラインで実装する
*/
#include<limits.h>

namespace Environ {

	/**
		@class Numeric
		@brief 組み込み数値型が前提なため、
		T型の値は参照渡ししない(暗黙キャストを認めるため)
	*/
	template<typename T=int>
	class Numeric {
	public:
		/**
		@brief 0で初期化する

		@param
		*/
		Numeric();

		/**
			@brief 指定した値で初期化する
			
			@param 
		*/
		Numeric(const T aValue);

		/**
			@brief 解放時処理
		*/
		~Numeric();


		/**
		@brief 組み込み整数型の代入

		@param
		@return
		*/
		operator T()const noexcept;

		//代入演算

		/**
			@brief	数値を代入する
			@param	(拡張)整数型
			@return	演算後のインスタンス参照 
		*/
		Numeric<T>& operator=(const T aVal);

		/**
		@brief	数値を加算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator+=(const T aVal);

		/**
		@brief	数値を減算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator-=(const T aVal);

		/**
		@brief	数値を除算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator/=(const T aVal);





		static constexpr T min = (std::numeric_limits<T>::min)(); /**< 型が表す最小数 */
		static constexpr T max = (std::numeric_limits<T>::max)(); /**< 型が表す最大数 */


		protected:
		T mValue; /**< 数値データ */
		
	}; 
}


