#pragma once

namespace Environ {
	template<typename T>
	inline Floating<T>::Floating() {}



	template<typename T>
	inline Floating<T>::~Floating()
	{
	}

	template<typename T>
	inline Floating<T>::Floating(const T aValue) :Numeric<T>(aValue) {}

}