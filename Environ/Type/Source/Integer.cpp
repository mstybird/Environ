#pragma once
#include<Type/Integer.hpp>
namespace Environ {


	//0����������
	template<typename T>
	Integer<T>::Integer():Integer(0) {}

	//�w��l�ŏ�����
	template<typename T>
	Integer<T>::Integer(const T& aValue):Numeric<T>(aValue) {}

	//��]�v�Z
	template<typename T>
	Integer<T> Integer<T>::operator%(const T& aVal)const {
		return Integer(mValue) %= aVal;
	}

	//��]����
	template<typename T>
	Integer<T>& Integer<T>::operator%=(const T& aVal) {
		mValue %= aVal;
		return *this;

	}

	//�r�b�g�E�V�t�g
	template<typename T>
	Integer<T> Integer<T>::operator>>(const T& aVal)const noexcept {
		return Integer(mValue) >>= aVal;
	}

	//�r�b�g���V�t�g
	template<typename T>
	Integer<T> Integer<T>::operator<<(const T& aVal)const noexcept {
		return Integer(mValue) <<= aVal;
	}

	//�r�b�g�E�V�t�g�������̂���
	template<typename T>
	Integer<T>& Integer<T>::operator>>=(const T& aVal) noexcept {
		mValue >>= aVal;
		return *this;

	}

	//�r�b�g���V�t�g�������̂���
	template<typename T>
	Integer<T>& Integer<T>::operator<<=(const T& aVal) noexcept {
		mValue <<= aVal;
		return *this;

	}

	//�_���ے�l��Ԃ�
	template<typename T>
	Integer<T> Integer<T>::operator~()const noexcept {
		return Integer(~static_cast<T>(*this));
	}

	//�_���ς�Ԃ�
	template<typename T>
	Integer<T> Integer<T>::operator&(const T&aVal)const noexcept {
		return Integer(mValue) &= aVal;
	}

	//�r���I�_���a��Ԃ�
	template<typename T>
	Integer<T> Integer<T>::operator^(const T&aVal)const noexcept {
		return Integer(mValue) ^= aVal;
	}

	//�_���a��Ԃ�
	template<typename T>
	Integer<T> Integer<T>::operator|(const T&aVal)const noexcept {
		return Integer(mValue) |= aVal;
	}

	//�_���ς�������
	template<typename T>
	Integer<T> Integer<T>::operator&=(const T&aVal)noexcept {
		mValue &= aVal;
		return *this;
	}

	//�r���I�_���a��������
	template<typename T>
	Integer<T> Integer<T>::operator^=(const T&aVal)noexcept {
		mValue ^= aVal;
		return *this;
	}

	//�_���a��������
	template<typename T>
	Integer<T> Integer<T>::operator|=(const T&aVal)noexcept {
		mValue |= aVal;
		return *this;
	}


	//�O�u�C���N�������g
	template<typename T>
	Integer<T>& Integer<T>::operator ++()noexcept {
		++mValue;
		return *this;
	}

	//�O�u�f�N�������g
	template<typename T>
	Integer<T>& Integer<T>::operator --()noexcept {
		--mValue;
		return *this;
	}

	//��u�C���N�������g
	template<typename T>
	Integer<T> Integer<T>::operator ++(int)const noexcept {
		auto lTemp = *this;
		++mValue;
		return lTemp;
	}

	//��u�f�N�������g
	template<typename T>
	Integer<T> Integer<T>::operator --(int)const noexcept {
		auto lTemp = *this;
		--mValue;
		return lTemp;
	}



}