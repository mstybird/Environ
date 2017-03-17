#include<Type/Numeric.hpp>
namespace Environ {

	/*
		�R���X�g���N�^
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


	//������Z
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






	//���Z
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





	//��r
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