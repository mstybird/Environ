#include<Type/Numeric.hpp>
namespace Environ {

	/*
		ƒRƒ“ƒXƒgƒ‰ƒNƒ^
	*/
	template<typename T>
	Numeric<T>::Numeric():mValue(0) {}

	template<typename T>
	Numeric<T>::Numeric(const T& aValue):mValue(aValue) {}

	template<typename T>
	Numeric<T>::~Numeric() {}

	template<typename T>
	Numeric<T>::operator T() const noexcept {
		return mValue;
	}


	//‘ã“ü‰‰ŽZ
	template<typename T>
	Numeric<T>& Numeric<T>::operator=(const T& aVal) {
		mValue = aVal;
		return *this;
	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator+=(const T& aVal) {
		mValue += aVal;
		return *this;
	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator-=(const T& aVal){
		mValue -= aVal;
		return *this;

	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator*=(const T& aVal){
		mValue *= aVal;
		return *this;

	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator/=(const T& aVal){
		mValue /= aVal;
		return *this;

	}






	//‰‰ŽZ
	template<typename T>
	Numeric<T> Numeric<T>::operator+(const T& aVal)const{
		return Numeric(mValue) += aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator-(const T& aVal)const{
		return Numeric(mValue) -= aVal;

	}

	template<typename T>
	Numeric<T> Numeric<T>::operator*(const T& aVal)const{
		return Numeric(mValue) *= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator/(const T& aVal)const{
		return Numeric(mValue) /= aVal;
	}





	//”äŠr
	template<typename T>
	bool Numeric<T>::operator==(const T& aVal)const{
		return mValue == aVal;
	}

	template<typename T>
	bool Numeric<T>::operator!=(const T& aVal)const{
		return mValue != aVal;

	}

	template<typename T>
	bool Numeric<T>::operator<(const T& aVal)const{
		return mValue < aVal;

	}

	template<typename T>
	bool Numeric<T>::operator<=(const T& aVal)const{
		return mValue <= aVal;

	}

	template<typename T>
	bool Numeric<T>::operator>(const T& aVal)const{
		return mValue > aVal;

	}

	template<typename T>
	bool Numeric<T>::operator>=(const T& aVal)const{
		return mValue >= aVal;

	}



}