#pragma once

namespace Environ {

	template<typename T>
	Integer<T>::Integer() {}

	template<typename T>
	Integer<T>::Integer(const T& aValue):Numeric<T>(aValue) {}

	template<typename T>
	Integer<T> Integer<T>::operator%(const T& aVal)const {
		return Integer(mValue) %= aVal;
	}


	template<typename T>
	Integer<T>& Integer<T>::operator%=(const T& aVal) {
		mValue %= aVal;
		return *this;

	}

	template<typename T>
	Integer<T> Integer<T>::operator>>(const T& aVal)const noexcept {
		return Integer(mValue) >>= aVal;
	}

	template<typename T>
	Integer<T> Integer<T>::operator<<(const T& aVal)const noexcept {
		return Integer(mValue) <<= aVal;
	}

	template<typename T>
	Integer<T>& Integer<T>::operator>>=(const T& aVal) noexcept {
		mValue >>= aVal;
		return *this;

	}

	template<typename T>
	Integer<T>& Integer<T>::operator<<=(const T& aVal) noexcept {
		mValue <<= aVal;
		return *this;

	}

	template<typename T>
	Integer<T> Integer<T>::operator~()const noexcept {
		return Integer(~static_cast<T>(*this));
	}


	template<typename T>
	Integer<T> Integer<T>::operator&(const T&aVal)const noexcept {
		return Integer(mValue) &= aVal;
	}

	template<typename T>
	Integer<T> Integer<T>::operator^(const T&aVal)const noexcept {
		return Integer(mValue) ^= aVal;
	}

	template<typename T>
	Integer<T> Integer<T>::operator|(const T&aVal)const noexcept {
		return Integer(mValue) |= aVal;
	}

	template<typename T>
	Integer<T> Integer<T>::operator&=(const T&aVal)noexcept {
		mValue &= aVal;
		return *this;
	}

	template<typename T>
	Integer<T> Integer<T>::operator^=(const T&aVal)noexcept {
		mValue ^= aVal;
		return *this;
	}

	template<typename T>
	Integer<T> Integer<T>::operator|=(const T&aVal)noexcept {
		mValue |= aVal;
		return *this;
	}


	//インクリデクリ
	template<typename T>
	Integer<T>& Integer<T>::operator ++()noexcept {
		++mValue;
		return *this;
	}

	template<typename T>
	Integer<T>& Integer<T>::operator --()noexcept {
		--mValue;
		return *this;
	}

	template<typename T>
	Integer<T> Integer<T>::operator ++(int)const noexcept {
		auto lTemp = *this;
		++mValue;
		return lTemp;
	}

	template<typename T>
	Integer<T> Integer<T>::operator --(int)const noexcept {
		auto lTemp = *this;
		--mValue;
		return lTemp;
	}



}