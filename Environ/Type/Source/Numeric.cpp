#include<Type/Numeric.hpp>
namespace Environ {

	//0������
	template<typename T>
	Numeric<T>::Numeric():mValue(0) {}

	//�w��l�ŏ�����
	template<typename T>
	Numeric<T>::Numeric(const T& aValue):mValue(aValue) {}

	//�f�X�g���N�^�B���邱�ƂȂ�
	template<typename T>
	Numeric<T>::~Numeric() {}

	//T�͑g�ݍ��݌^�BEnviron::Int�Ȃ�int��Ԃ�
	template<typename T>
	Numeric<T>::operator T() const noexcept {
		return mValue;
	}


	//�������
	template<typename T>
	Numeric<T>& Numeric<T>::operator=(const T& aVal) {
		mValue = aVal;
		return *this;
	}

	//���ݒl�ɉ��Z�������̂�������
	template<typename T>
	Numeric<T>& Numeric<T>::operator+=(const T& aVal) {
		mValue += aVal;
		return *this;
	}

	//���l�����Z�������ʂ�������
		template<typename T>
	Numeric<T>& Numeric<T>::operator-=(const T& aVal){
		mValue -= aVal;
		return *this;

	}

	//���l����Z�������ʂ�������
	template<typename T>
	Numeric<T>& Numeric<T>::operator*=(const T& aVal){
		mValue *= aVal;
		return *this;

	}

	//���l�����Z�������ʂ�������
	template<typename T>
	Numeric<T>& Numeric<T>::operator/=(const T& aVal){
		mValue /= aVal;
		return *this;

	}






	//���l�����Z�������ʂ��擾����
	template<typename T>
	Numeric<T> Numeric<T>::operator+(const T& aVal)const{
		return Numeric(mValue) += aVal;
	}

	//���l�����Z�������ʂ��擾����
	template<typename T>
	Numeric<T> Numeric<T>::operator-(const T& aVal)const{
		return Numeric(mValue) -= aVal;

	}

	//���l����Z�������ʂ��擾����
	template<typename T>
	Numeric<T> Numeric<T>::operator*(const T& aVal)const{
		return Numeric(mValue) *= aVal;
	}

	//���l�����Z�������ʂ��擾����
	template<typename T>
	Numeric<T> Numeric<T>::operator/(const T& aVal)const{
		return Numeric(mValue) /= aVal;
	}





	//���l���r���ē��������true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator==(const T& aVal)const{
		return mValue == aVal;
	}

	//���l���r���ē������Ȃ����true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator!=(const T& aVal)const{
		return mValue != aVal;

	}

	//���l���r���ē������Ȃ����true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator<(const T& aVal)const{
		return mValue < aVal;

	}

	//���l���r���ē������Ȃ����true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator<=(const T& aVal)const{
		return mValue <= aVal;

	}

	//���l���r���ē������Ȃ����true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator>(const T& aVal)const{
		return mValue > aVal;

	}

	//���l���r���ē������Ȃ����true��Ԃ�
	template<typename T>
	bool Numeric<T>::operator>=(const T& aVal)const{
		return mValue >= aVal;

	}



}