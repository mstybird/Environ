#pragma once
#include<Type/Integer.hpp>
namespace Environ {


	//0初期化処理
	template<typename T>
	Integer<T>::Integer():Integer(0) {}

	//指定値で初期化
	template<typename T>
	Integer<T>::Integer(const T& aValue):Numeric<T>(aValue) {}

	//剰余計算
	template<typename T>
	Integer<T> Integer<T>::operator%(const T& aVal)const {
		return Integer(mValue) %= aVal;
	}

	//剰余を代入
	template<typename T>
	Integer<T>& Integer<T>::operator%=(const T& aVal) {
		mValue %= aVal;
		return *this;

	}

	//ビット右シフト
	template<typename T>
	Integer<T> Integer<T>::operator>>(const T& aVal)const noexcept {
		return Integer(mValue) >>= aVal;
	}

	//ビット左シフト
	template<typename T>
	Integer<T> Integer<T>::operator<<(const T& aVal)const noexcept {
		return Integer(mValue) <<= aVal;
	}

	//ビット右シフトしたものを代入
	template<typename T>
	Integer<T>& Integer<T>::operator>>=(const T& aVal) noexcept {
		mValue >>= aVal;
		return *this;

	}

	//ビット左シフトしたものを代入
	template<typename T>
	Integer<T>& Integer<T>::operator<<=(const T& aVal) noexcept {
		mValue <<= aVal;
		return *this;

	}

	//論理否定値を返す
	template<typename T>
	Integer<T> Integer<T>::operator~()const noexcept {
		return Integer(~static_cast<T>(*this));
	}

	//論理積を返す
	template<typename T>
	Integer<T> Integer<T>::operator&(const T&aVal)const noexcept {
		return Integer(mValue) &= aVal;
	}

	//排他的論理和を返す
	template<typename T>
	Integer<T> Integer<T>::operator^(const T&aVal)const noexcept {
		return Integer(mValue) ^= aVal;
	}

	//論理和を返す
	template<typename T>
	Integer<T> Integer<T>::operator|(const T&aVal)const noexcept {
		return Integer(mValue) |= aVal;
	}

	//論理積を代入する
	template<typename T>
	Integer<T> Integer<T>::operator&=(const T&aVal)noexcept {
		mValue &= aVal;
		return *this;
	}

	//排他的論理和を代入する
	template<typename T>
	Integer<T> Integer<T>::operator^=(const T&aVal)noexcept {
		mValue ^= aVal;
		return *this;
	}

	//論理和を代入する
	template<typename T>
	Integer<T> Integer<T>::operator|=(const T&aVal)noexcept {
		mValue |= aVal;
		return *this;
	}


	//前置インクリメント
	template<typename T>
	Integer<T>& Integer<T>::operator ++()noexcept {
		++mValue;
		return *this;
	}

	//前置デクリメント
	template<typename T>
	Integer<T>& Integer<T>::operator --()noexcept {
		--mValue;
		return *this;
	}

	//後置インクリメント
	template<typename T>
	Integer<T> Integer<T>::operator ++(int)const noexcept {
		auto lTemp = *this;
		++mValue;
		return lTemp;
	}

	//後置デクリメント
	template<typename T>
	Integer<T> Integer<T>::operator --(int)const noexcept {
		auto lTemp = *this;
		--mValue;
		return lTemp;
	}



}