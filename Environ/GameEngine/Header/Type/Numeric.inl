
namespace Environ {

	/*
		コンストラクタ
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


	//代入演算
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

	template<typename T>
	Numeric<T>& Numeric<T>::operator%=(const T& aVal){
		mValue %= aVal;
		return *this;

	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator>>=(const T& aVal){
		mValue >>= aVal;
		return *this;

	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator<<=(const T& aVal){
		mValue <<= aVal;
		return *this;

	}


	//演算
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

	template<typename T>
	Numeric<T> Numeric<T>::operator%(const T& aVal)const{
		return Numeric(mValue) %= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator>>(const T& aVal)const{
		return Numeric(mValue) >>= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator<<(const T& aVal)const{
		return Numeric(mValue) <<= aVal;
	}


	//比較
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


	//論理
	template<typename T>
	Numeric<T> Numeric<T>::operator&(const T&aVal){
		return Numeric(mValue) &= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator^(const T&aVal){
		return Numeric(mValue) ^= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator|(const T&aVal){
		return Numeric(mValue) |= aVal;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator~()const noexcept {
		return Numeric(~mValue);
	}


	template<typename T>
	Numeric<T> Numeric<T>::operator&=(const T&aVal){
		mValue &= aVal;
		return *this;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator^=(const T&aVal){
		mValue ^= aVal;
		return *this;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator|=(const T&aVal){
		mValue |= aVal;
		return *this;
	}


	//インクリデクリ
	template<typename T>
	Numeric<T>& Numeric<T>::operator ++(){
		++mValue;
		return *this;
	}

	template<typename T>
	Numeric<T>& Numeric<T>::operator --(){
		--mValue;
		return *this;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator ++(int){
		auto lTemp = *this;
		++mValue;
		return lTemp;
	}

	template<typename T>
	Numeric<T> Numeric<T>::operator --(int){
		auto lTemp = *this;
		--mValue;
		return lTemp;
	}



}