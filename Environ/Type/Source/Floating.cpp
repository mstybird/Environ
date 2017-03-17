#pragma once

namespace Environ {
	template<typename T>
	Floating<T>::Floating() {}

	template<typename T>
	Floating<T>::Floating(const T& aValue) :Numeric<T>(aValue) {}

}