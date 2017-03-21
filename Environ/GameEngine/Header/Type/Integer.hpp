#pragma once
/**
	@file Integer.hpp
	@date Create for 2017/03/05 20:06

	@author msty

	@brief Environ標準の拡張整数型
*/

#include"Numeric.hpp"
#include <stdint.h>
#include<limits>
namespace Environ {
	/**
		@class Integer
		@brief Environ標準の拡張整数型
	*/
	template<typename T=int>
	class Integer :public Numeric<T>{
	public:
		Integer();
		Integer(const T aValue);


		/**
		@brief	数値を除算した結果のあまりを代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T>& operator%=(const T aVal);



		/**
		@brief	数値を右シフトした結果を代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T>& operator>>=(const T aVal)noexcept;

		/**
		@brief	数値を左シフトした結果を代入する(Integer<>に移植する)
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T>& operator<<=(const T aVal)noexcept;

		Integer<T> operator~()const noexcept;



		/**
		@brief	数値との論理積を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T> operator&=(const T aVal)noexcept;

		/**
		@brief	数値との排他的論理和を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T> operator^=(const T aVal)noexcept;

		/**
		@brief	数値との論理和を代入する
		@param	(拡張)整数型
		@return	演算後のインスタンス参照
		*/
		Integer<T> operator|=(const T aVal)noexcept;


		/**
		@brief	数値を1加算する
		@param	(拡張)整数型
		@return	加算後のインスタンスの参照
		*/
		Integer<T>& operator ++()noexcept;

		/**
		@brief	数値を1減算する
		@param	(拡張)整数型
		@return	減算後のインスタンスの参照
		*/
		Integer<T>& operator --()noexcept;

		/**
		@brief	数値を1加算する
		@param	(拡張)整数型
		@return	加算前のインスタンス
		*/
		Integer<T> operator ++(int)const noexcept;

		/**
		@brief	数値を1減算する
		@param	(拡張)整数型
		@return	加算前のインスタンス
		*/
		Integer<T> operator --(int)const noexcept;

		static constexpr T MaxDigit = (std::numeric_limits<T>::digits10);	/**< 10進数で表せる最大桁数 */ 

	};


}

using SByte = Environ::Integer<int8_t>;
using Byte = Environ::Integer<uint8_t>;
using Short = Environ::Integer<int16_t>;
using UShort = Environ::Integer<uint16_t>;
using Int = Environ::Integer<int32_t>;
using UInt = Environ::Integer<uint32_t>;
using Long = Environ::Integer<int64_t>;
using ULong = Environ::Integer<uint64_t>;
