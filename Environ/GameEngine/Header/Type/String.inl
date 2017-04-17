#pragma once
#include"String.hpp"
#include"Boolean.hpp"
#include"BetweenValue.hpp"
#include"Char.hpp"

//�I�[�ɕK��\0�����邽�߁A�T�C�Y�͕K�������I�ɂ�1�����`�ɂȂ�
//�K���T�C�Y1�ȏ�ƂȂ�
//��������ȊO�͏I�[��\0�������Ă���O��ŃR�[�h�������ėǂ�
//������\0������Ȃ��ꍇ���l��������̂́A\0�`�F�b�N���s��

namespace Environ {

	//�󕶎���ŏ�����
	inline String::String():mValue { '\0' }
	{
		
	}

	//�L���p�V�e�B���w�肵�Ă��當����ŏ���������
	inline String::String(const Int aCapacity):mValue{ '\0' }
	{
		//�K��null�������ʊm�ۂ̂���+1
		if (aCapacity > 0)mValue.reserve(aCapacity + 1);
	}

	//�����ŏ���������
	inline String::String(const char aObject):mValue{aObject,'\0'}
	{
	}

	//const char*������ŏ���������
	inline String::String(const char * aObject):mValue()
	{
		//�|�C���^��null�Ȃ�I�[�����̂ݓ����
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}

		//�I�[�����ɂ��ǂ蒅���܂ő��
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		mValue.push_back('\0');
	}

	inline String::String(const std::string & aObject): mValue(aObject.begin(),aObject.end())
	{
		mValue.push_back('\0');
	}

	//�I�u�W�F�N�g�ŏ���������
	inline String::String(const Object & aObject)
	{
		auto lObjectStr = aObject.ToString();
		mValue.reserve(lObjectStr.Length());
		for (auto& lChar : lObjectStr) {
			mValue.push_back(lChar);
			mValue.push_back('\0');
		}
	}

	//�I�u�W�F�N�g�ŏ��������A�L���p�V�e�B��ݒ肷��
	inline String::String(const Object & aObject, const Int aCapacity)
	{
		auto lObjectStr = aObject.ToString();
		mValue.reserve(lObjectStr.Length());
		for (auto& lChar : lObjectStr) {
			mValue.push_back(lChar);
		}
		mValue.push_back('\0');
	
		//�K��null�������ʊm�ۂ̂���+1
		if (aCapacity+1 > mValue.size())mValue.reserve(aCapacity+1);

	}



	//���ɂȂ�
	inline String::~String()
	{
	}

	//const char*������|�C���^��Ԃ�
	inline String::operator const char*()const
	{
		return reinterpret_cast<const char*>(mValue.data());
	}

	inline String::operator const Char*() const
	{
		return mValue.data();
	}


	//�I�u�W�F�N�g��������
	inline String & String::operator=(const Object & aObject)
	{
		//Set���\�b�h�𗘗p
		return this->Set(aObject);
	}

	//������������
	inline String& String::operator=(const char aObject)
	{
		mValue.clear();
		mValue.push_back(aObject);
		return *this;

	}

	//������������
	inline String & String::operator=(const std::string & aObject)
	{
		//���݂̕������������
		mValue.clear();

		//�����ɑ��
		std::copy(aObject.begin(), aObject.end(), std::back_inserter(mValue));
		//\0����Ȃ���ΏI�[�������
		if (mValue.back() == '\0')mValue.push_back('\0');
		return *this;
	}

	//�������������
	inline String& String::operator=(const char* aObject)
	{
		//Set���\�b�h�𗘗p
		return this->Set(aObject);


	}

	//������𖖔��ɒǉ�����
	inline String & String::operator+=(const Object & aObject)
	{
		//Append���\�b�h�𗘗p
		return this->Append(aObject);
	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const char aObject)
	{
		//�ꎞ�I�ɏI�[��������菜��
		mValue.pop_back();
		mValue.push_back(aObject);
		//�I�[�������
		mValue.push_back('\0');
		return *this;

	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const char* aObject)
	{
		//Apend���\�b�h�𗘗p
		return this->Append(aObject);
	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const String& aObject)
	{
		//�I�[�������ꎞ�I�Ɏ�菜��
		mValue.pop_back();
		std::copy(aObject.mValue.begin(), aObject.mValue.end(), std::back_inserter(mValue));
		//Environ::String�͕K���I�[��\0�Ȃ̂ŕʂ�\0��������K�v�͖���

		return *this;
	}

	//������𖖔��ɒǉ�����
	inline String & String::operator+=(const std::string & aObject)
	{
		//�I�[�������ꎞ�I�Ɏ�菜��
		mValue.pop_back();

		std::copy(aObject.begin(), aObject.end(), std::back_inserter(mValue));
		//\0�͏���ɓ���Ă���Ȃ��̂�\0�ǉ�
		mValue.push_back('\0');
		return *this;
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const Object & aObject)const
	{
		//operator==(String)�ɏ�����C����
		return *this == aObject.ToString();
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const char* aObject) const
	{
		//null�ł����false
		if (aObject == nullptr)return false;
		//1�������`�F�b�N
		Boolean lResult = true;
		for (const auto& lChar : mValue) {
			//�I�[�����ɂ��ǂ蒅�����ꍇ
			if (lChar == '\0') {
				//�Ȃ�����r�Ώۂ��I�[�������������v
				break;
			}

			//�I�[�����Ȃ�s��v(false)
			//��r�Ώە�����̕����Z���ꍇ�ɋN���肤��
			if (*aObject == '\0') {
				lResult = false;
				break;
			}
			//�قȂ镶���Ȃ�s��v
			if (lChar != *aObject) {
				lResult = false;
				break;
			}
		}

		return lResult;
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const String& aObject) const
	{
		return mValue == aObject.mValue;
	}

	inline Boolean String::operator==(const std::string & aObject) const
	{
		return std::equal(this->cbegin(),this->cend(),aObject.cbegin(),aObject.cend());
	}

	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const Object & aObject)const
	{
		//operator==(Object)�𗘗p
		return !(*this==aObject);
	}


	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const char* aObject) const
	{
		//operator==(const char*)�𗘗p
		return !(*this == aObject);
	}

	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const String& aObject) const
	{
		return mValue != aObject.mValue;
	}

	inline Boolean String::operator!=(const std::string & aObject) const
	{
		//operator==(std::string)�𗘗p
		return *this == aObject;
	}

	//���݂̗L���ȕ�����̒�����Ԃ�
	inline UInt String::Length() const
	{
		return static_cast<uint32_t>(mValue.size());
	}

	//�w�肵���ʒu�̕������擾����
	inline Char String::At(const UInt aIndex) const
	{
		if (aIndex >= 0 && aIndex < mValue.size()) {
			return mValue.at(aIndex);
		}
		
		//�͈͊O���w�肵���ꍇ��\0��Ԃ�
		return Char();
		
	}

	inline String & String::Append(const char * aObject)
	{
		//�|�C���^��null�Ȃ牽�����Ȃ�
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}
		//�I�[�������ꎞ�I�Ɏ�菜��
		mValue.pop_back();

		//�I�[�����ɂ��ǂ蒅���܂ő��
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		//�I�[�������
		mValue.push_back('\0');
		return *this;
	}

	//�����ɕ������ǉ�����
	inline String & String::Append(const Object & aObject)
	{
		//�I�[������菜��
		mValue.pop_back();
		auto lObjectStr = aObject.ToString();
		//�����ɑ��
		std::copy(lObjectStr.begin(), lObjectStr.end(), std::back_inserter(mValue));
		return *this;
	}

	//�����Ɏw��͈͕������ǉ�����
	inline String & String::Append(const Object & aObject, const Between& aBetween)
	{
		//�͈͊O�`�F�b�N
		auto lAppendStr = aObject.ToString();
		auto lStrBetween = aBetween;
		//�J�n�C���f�b�N�X��0������0�ɕ␳
		if (lStrBetween.GetStart() < 0) {
			lStrBetween.SetStart(0);
		}

		//�I�[�C���f�b�N�X��������̒�����蒷���ꍇ�͖��������C���f�b�N�X�ɕ␳
		if (lStrBetween.GetEnd() >= lAppendStr.Length()) {
			lStrBetween.SetEnd(this->Length() - 1);
		}
		auto lIteratorStr = lAppendStr.begin();

		//������\0���폜
		mValue.pop_back();
		//�͈͕������ǋL
		std::copy(
			lIteratorStr + aBetween.GetStart(),
			lIteratorStr + aBetween.GetEnd(),
			std::back_inserter(mValue)
		);
		//�I�[�������
		mValue.push_back('\0');


		return *this;
	}

	inline String & String::Set(const char * aObject)
	{
		mValue.clear();
		//�|�C���^��null�Ȃ�I�[�����̂ݓ����
		if (aObject == nullptr) {
			mValue.push_back('\0');
		}

		//�I�[�����ɂ��ǂ蒅���܂ő��
		while (aObject) {
			mValue.push_back(*aObject);
			++aObject;
		}
		//�I�[�������
		mValue.push_back('\0');
		return *this;
	}

	//�������������
	inline String & String::Set(const Object & aObject)
	{
		//�R���X�g���N�^��ʂ����ۂ�\0�������ɂ���
		mValue = std::move(aObject.ToString().mValue);
		return *this;
	}

	//�w��͈͕������������
	inline String & String::Set(const Object & aObject, const Between& aBetween)
	{
		//�͈͊O�`�F�b�N
		auto lAppendStr = aObject.ToString();
		auto lStrBetween = aBetween;
		if (lStrBetween.GetStart() < 0) {
			lStrBetween.SetStart(0);
		}
		if (lStrBetween.GetEnd() >= this->Length()) {
			lStrBetween.SetEnd(this->Length() - 1);
		}

		//�͈͕������ǋL
		auto lIteratorStr = lAppendStr.begin();
		//��x��������N���A
		mValue.clear();
		std::copy(
			lIteratorStr + aBetween.GetStart(),
			lIteratorStr + aBetween.GetEnd(),
			std::back_inserter(mValue)
		);
		//�I�[�������
		mValue.push_back('\0');


		return *this;
	}

	//�����񂪐����݂̂ō\������Ă��邩���ׂ�
	inline Boolean String::IsDigits() const
	{
		Boolean lDigitFlag = true;
		
		//1�������`�F�b�N
		for (auto& lChar : *this) {
			if (lChar.IsDigit()==false) {
				lDigitFlag = false;
				break;
			}
		}

		return lDigitFlag;
	}

	//�����񂪔��p�A���t�@�x�b�g�݂̂ō\������Ă��邩���ׂ�
	inline Boolean String::IsAlpha() const
	{
		
		Boolean lAlphaFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsAlpha() == false) {
				lAlphaFlag = false;
				break;
			}
		}

		return lAlphaFlag;
	}

	//�����񂪔��p�A���t�@�x�b�g�̑啶���݂̂ō\������Ă��邩���ׂ�
	inline Boolean String::IsUpper() const
	{
		Boolean lUpperFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsUpper() == false) {
				lUpperFlag = false;
				break;
			}
		}

		return lUpperFlag;
	}

	//�����񂪔��p�A���t�@�x�b�g�̏������݂̂ō\������Ă��邩���ׂ�
	inline Boolean String::IsLower() const
	{
		Boolean lLowerFlag = true;

		for (auto& lChar : *this) {
			if (lChar.IsLower() == false) {
				lLowerFlag = false;
				break;
			}
		}

		return lLowerFlag;
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ���
	inline String & String::Uppering()
	{
		for (auto& lChar : *this) {
			lChar.ToUpper();
		}
		return *this;
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ���
	inline String & String::Lowering()
	{
		for (auto& lChar : *this) {
			::tolower(lChar);
		}
		return *this;
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ������̂��擾����
	inline String String::GetUpper() const
	{
		return String(*this).Uppering();
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ������̂��擾����
	inline String String::GetLower() const
	{
		return String(*this).Lowering();
	}

	//���ۂ̕�����̃T�C�Y��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
	inline String & String::Resize(const UInt aSize)
	{
		if (aSize < 0) {
			mValue.resize(0);
		}
		else {
			mValue.resize(aSize);
		}
		return *this;
	}

	//������̃L���p�V�e�B��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
	inline String & String::Reserve(const UInt aSize)
	{
		if (aSize < 0) {
			mValue.reserve(0);
		}
		else {
			mValue.reserve(aSize);
		}
		String s;
		
		return *this;
	}

	inline String & String::Clear()
	{
		mValue.clear();
		return *this;
	}

	//�w�肵���͈͂̕�������폜����BBetween::Step���L���Ȓl�������ꍇ�́A���̃X�e�b�v���ɏ]���ĕ������폜����
	inline String & String::Erasing(const Between aBetween)
	{
		mValue.erase(aBetween.GetStart(), aBetween.GetEnd() - aBetween.GetStart());
		return *this;
	}

	//�w�肵���͈͂ŕ�������\������B
	inline String & String::Subbing(const Between aBetween)
	{
		*this=std::move(mValue.substr(aBetween.GetStart(), 
			aBetween.GetEnd() - aBetween.GetStart()
			)
		);

		return *this;
	}

	//�w�肵���͈͂̕�������擾����
	inline String String::GetSub(const Between & aBetween) const
	{
		return std::move(
			mValue.substr(
				aBetween.GetStart(), 
				aBetween.GetEnd() - aBetween.GetStart()
			)
		);
	}

	//�w��ʒu�ɕ������ǉ�����B
	inline String & String::Insert(const UInt aIndex, const Object & aObject)
	{
		mValue.insert(aIndex, aObject.ToString());
		return *this;
	}

	//�w��ʒu�ɕ������ǉ�����B
	inline String & String::Insert(const UInt aIndex, const Object & aObject, const Between & aBetween)
	{
		mValue.insert(
			aIndex, 
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);

		return *this;
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject)
	{
		mValue.insert(aIndex, aObject);
		return *this;
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject, const Between& aBetween)
	{
		mValue.insert(
			aIndex,
			aObject,
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);

		return *this;
	}

	//�w�肵���͈͂�ʂ̕�����Œu��������
	inline String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		mValue.replace(
			aReplaceBetween.GetStart(),
			aReplaceBetween.GetEnd() - aReplaceBetween.GetStart(),
			aObject.ToString()
		);
		return *this;
	}

	//�w�肵���͈͂�ʂ͈͕̔�����Œu��������
	inline String & String::Replacing(const Between & aReplaceBetween, const Object & aObject, const Between & aStringBetween)
	{
		mValue.replace(
			aReplaceBetween.GetStart(),
			aReplaceBetween.GetEnd() - aReplaceBetween.GetStart(),
			aObject.ToString(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
			);
		return *this;
	}

	//���������������
	inline UInt String::Find(const Object & aObject) const
	{
		
		return static_cast<uint32_t>(mValue.find(aObject.ToString()));
	}

	//���������������
	inline UInt String::Find(const Object & aObject, const Between & aStringBetween)const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject.ToString(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd()- aStringBetween.GetStart()
			));
	}

	//���������������
	inline UInt String::Find(const Object & aObject, const UInt & aStartIndex)const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject.ToString(),
			aStartIndex
		));
	}

	inline UInt String::Find(const String& aObject) const
	{
		return static_cast<uint32_t>(mValue.find(aObject));
	}

	inline UInt String::Find(const String& aObject, const Between& aStringBetween) const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject.c_str(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
		));
	}

	inline UInt String::Find(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(mValue.find(
			aObject,
			aStartIndex
		));
	}

	//������𖖔����猟������
	inline UInt String::FindBack(const Object & aObject, const UInt & aStartIndex)const
	{
		return static_cast<uint32_t>(mValue.rfind(
			aObject.ToString(),
			aStartIndex
		));
	}

	inline UInt String::FindBack(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(mValue.rfind(
			aObject,
			aStartIndex
		));
	}

	//��������r����
	inline Boolean String::Equal(const Object & aValue) const
	{
		return this->operator ==(aValue.ToString());
	}


	inline Boolean String::Equal(const String & aValue) const
	{
		return this->operator ==(aValue);
	}

	inline Boolean String::Equal(const std::string& aValue) const
	{
		return this->operator ==(aValue);
	}

	inline Boolean String::Equal(const char *& aValue) const
	{
		return this->operator ==(aValue);
	}


	//��������擾���遦�񐄏�
	inline String String::ToString() const
	{
		return *this;
	}

}
