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
		Numeric(const T& aValue);

		/**
			@brief 解放時処理
		*/
		~Numeric();

		/**
			@brief 組み込み型の生の値を取得する

			@return 組み込み型の生の値(Numeric<int>ならint型で返す
		*/

		/**
		@brief 組み込み整数型の代入

		@param
		@return
		*/

		//演算子のオーバーロード群
		operator T()const noexcept;

		//代入演算

		/**
			@brief	数値を代入する
			@param	(拡張)整数型
			@return	演算後のインスタンス参照 
		*/
		Numeric<T>& operator=(const T& aVal);

		/**
		@brief	数値を加算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator+=(const T& aVal);

		/**
		@brief	数値を減算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator-=(const T& aVal);

		/**
		@brief	数値を乗算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator*=(const T& aVal);

		/**
		@brief	数値を除算した結果を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator/=(const T& aVal);

		/**
		@brief	数値を除算した結果のあまりを代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		//Numeric<T>& operator%=(const T& aVal);

		/**
		@brief	数値を右シフトした結果を代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator>>=(const T& aVal);

		/**
		@brief	数値を左シフトした結果を代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Numeric<T>& operator<<=(const T& aVal);

		//演算

		/**
		@brief	数値を加算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator+(const T& aVal)const;

		/**
		@brief	数値を減算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator-(const T& aVal)const;

		/**
		@brief	数値を乗算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator*(const T& aVal)const;

		/**
		@brief	数値を除算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator/(const T& aVal)const;

		/**
		@brief	数値を除算した際の剰余した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		//Numeric<T> operator%(const T& aVal)const;

		/**
		@brief	数値を加算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator>>(const T& aVal)const;

		/**
		@brief	数値を加算した結果を取得する
		@param	(拡張)整数型
		@return	演算後のインスタンス
		*/
		Numeric<T> operator<<(const T& aVal)const;

		//比較

		/**
		@brief	数値を比較して等しければtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator==(const T& aVal)const;

		/**
		@brief	数値を比較して等しくなければtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator!=(const T& aVal)const;

		/**
		@brief	数値を比較して式が成り立てばtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator<(const T& aVal)const;

		/**
		@brief	数値を比較して式が成り立てばtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator<=(const T& aVal)const;

		/**
		@brief	数値を比較して式が成り立てばtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator>(const T& aVal)const;

		/**
		@brief	数値を比較して式が成り立てばtrueを返す
		@param	(拡張)整数型
		@return	比較式が成り立てばtrueを返す
		*/
		bool operator>=(const T& aVal)const;

		//論理



		/**
		@brief	二つの数値との論理積を取得する
		@param	(拡張)整数型
		@return	論理積の演算結果
		*/
		//Numeric<T> operator&(const T&aVal);

		/**
		@brief	二つの数値との排他的論理和を取得する
		@param	(拡張)整数型
		@return	論理積の演算結果
		*/
		//Numeric<T> operator^(const T&aVal);

		/**
		@brief	二つの数値との論理和を取得する
		@param	(拡張)整数型
		@return	論理積の演算結果
		*/
		//Numeric<T> operator|(const T&aVal);
		
		/**
		@brief	二つの数値との論理和を取得する
		@param	(拡張)整数型
		@return	論理積の演算結果
		*/
		//Numeric<T> operator~()const noexcept;


		/**
		@brief	数値との論理積を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		//Numeric<T> operator&=(const T&aVal);

		/**
		@brief	数値との排他的論理和を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		//Numeric<T> operator^=(const T&aVal);

		/**
		@brief	数値との論理和を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		//Numeric<T> operator|=(const T&aVal);

		//インクリデクリ


		/**
		@brief	数値を1加算する
		@param	(拡張)整数型
		@return	加算後のインスタンスの参照
		*/
		//Numeric<T>& operator ++();

		/**
		@brief	数値を1減算する
		@param	(拡張)整数型
		@return	減算後のインスタンスの参照
		*/
		//Numeric<T>& operator --();

		/**
		@brief	数値を1加算する
		@param	(拡張)整数型
		@return	加算前のインスタンス
		*/
		//Numeric<T> operator ++(int);

		/**
		@brief	数値を1減算する
		@param	(拡張)整数型
		@return	加算前のインスタンス
		*/
		//Numeric<T> operator --(int);

		static constexpr T min = (std::numeric_limits<T>::min)(); /**< 型が表す最小数 */
		static constexpr T max = (std::numeric_limits<T>::max)(); /**< 型が表す最大数 */


		protected:
		T mValue; /**< 数値データ */
		
	}; 
}
#include"Numeric.inl"


