#pragma once
/**
	@file Integer.hpp
	@date Create for 2017/03/05 20:06

	@author msty

	@brief Environ•W€‚ÌŠg’£®”Œ^
*/

#include"Numeric.hpp"
#include <stdint.h>
#include<limits>
namespace Environ {
	/**
		@class Integer
		@brief Environ•W€‚ÌŠg’£®”Œ^
	*/
	template<typename T=int>
	class Integer :public Numeric<T>{
	public:
		Integer();
		Integer(const T& aValue);

		using Numeric<T>::operator=;

		using Numeric<T>::operator+;
		using Numeric<T>::operator-;
		using Numeric<T>::operator*;
		using Numeric<T>::operator/;

		using Numeric<T>::operator+=;
		using Numeric<T>::operator-=;
		using Numeric<T>::operator*=;
		using Numeric<T>::operator/=;

		Integer<T> operator%(const T& aVal)const;
		Integer<T>& operator%=(const T& aVal);

		Integer<T> operator>>(const T& aVal)const noexcept;
		Integer<T> operator<<(const T& aVal)const noexcept;
		Integer<T>& operator>>=(const T& aVal)noexcept;
		Integer<T>& operator<<=(const T& aVal)noexcept;

		Integer<T> operator~()const noexcept;

		Integer<T> operator&(const T&aVal)const noexcept;
		Integer<T> operator^(const T&aVal)const noexcept;
		Integer<T> operator|(const T&aVal)const noexcept;
		Integer<T> operator&=(const T&aVal)noexcept;
		Integer<T> operator^=(const T&aVal)noexcept;
		Integer<T> operator|=(const T&aVal)noexcept;

		Integer<T>& operator ++()noexcept;
		Integer<T>& operator --()noexcept;
		Integer<T> operator ++(int)const noexcept;
		Integer<T> operator --(int)const noexcept;

		static constexpr T MaxDigit = std::numeric_limits<T>::digits10);	/**< 10i”‚Å•\‚¹‚éÅ‘åŒ…” */ 

	};

	using SByte = Integer<int8_t>;
	using Byte = Integer<uint8_t>;
	using Short = Integer<int16_t>;
	using UShort = Integer<uint16_t>;
	using Int = Integer<int32_t>;
	using Uint = Integer<uint32_t>;
	using Long = Integer<int64_t>;
	using ULong = Integer<uint64_t>;

}

#include"Integer.inl"