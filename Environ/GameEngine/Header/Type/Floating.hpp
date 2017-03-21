#pragma once

/**
	@file Floating.hpp
	@date Create for 2017/03/11 8:50

	@author msty

	@brief EnvironWÌs®¬^
*/

#include"Numeric.hpp"
#include<limits>
namespace Environ {
	template<typename T=float>
	class Floating :public Numeric<T> {
	public:

		Floating();
		Floating(const T aValue);
		~Floating();

		static constexpr T RoundError = std::numeric_limits<T>::round_error();//Ûßë·p
		static constexpr T Epsilon = std::numeric_limits<T>::epsilon();//ë·mp(®­êp
		static constexpr int Maxdigit10 = std::numeric_limits<T>::max_digits10;	//®­p
		static constexpr T Infinity = std::numeric_limits<T>::infinity();//³Ì³Àå
	};



}

using Float = Environ::Floating<float>;
using Double = Environ::Floating<double>;
using LDouble = Environ::Floating<long double>;




