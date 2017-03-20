#include "..\..\GameEngine\Header\Type\Floating.hpp"
#include "..\..\GameEngine\Header\Type\Floating.hpp"
#pragma once

namespace Environ {
	template<typename T>
	Floating<T>::Floating() {}

	template<typename T>
	Floating<T>::Floating(const T aValue)
	{
	}

	template<typename T>
	Floating<T>::~Floating()
	{
	}

	template<typename T>
	Floating<T>::Floating(const T& aValue) :Numeric<T>(aValue) {}

}