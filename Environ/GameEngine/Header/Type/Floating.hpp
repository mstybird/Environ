#pragma once

/**
	@file Floating.hpp
	@date Create for 2017/03/11 8:50

	@author msty

	@brief Environ標準の不動小数型
*/

#include"Numeric.hpp"
#include<limits>
namespace Environ {
	template<typename T=float>
	class Floating :public Numeric<T> {
	public:

		Floating();
		Floating(const T& aValue);

		static constexpr T RoundError = std::numeric_limits<T>::round_error();//丸め誤差用
		static constexpr T Epsilon = std::numeric_limits<T>::epsilon();//誤差検知用(浮動少数専用
		static constexpr int Maxdigit10 = std::numeric_limits<T>::max_digits10;	//浮動少数用
		static constexpr T Infinity = std::numeric_limits<T>::infinity();//正の無限大
	};



}

#include"Floating.inl"

using Float = Environ::Floating<float>;
using Double = Environ::Floating<double>;
using LDouble = Environ::Floating<long double>;




