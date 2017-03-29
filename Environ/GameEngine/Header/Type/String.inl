#pragma once
namespace Environ {

	//�󕶎���ŏ�����
	inline String::String():std::string("")
	{
		
	}

	//�L���p�V�e�B���w�肵�Ă��當����ŏ���������
	inline String::String(const Int aCapacity):std::string("")
	{

		if (aCapacity > 0)std::string::reserve(aCapacity);
	}

	//�����ŏ���������
	inline String::String(const char aObject)
	{
		//char�ŏ������ł���R���X�g���N�^���Ȃ������̂�operator==�ő�p
		std::string::operator =(aObject);
	}

	//const char*������ŏ���������
	inline String::String(const char * aObject):std::string(aObject)
	{
		
	}

	inline String::String(const std::string & aObject):std::string(aObject)
	{
	}

	//�I�u�W�F�N�g�ŏ���������
	inline String::String(const Object & aObject):std::string(aObject.ToString())
	{
	}

	//�I�u�W�F�N�g�ŏ��������A�L���p�V�e�B��ݒ肷��
	inline String::String(const Object & aObject, const Int aCapacity): std::string(aObject.ToString())
	{
		if (aCapacity > 0)std::string::reserve(aCapacity);
	}



	//���ɂȂ�
	inline String::~String()
	{
	}

	//const char*������|�C���^��Ԃ�
	inline String::operator const char*()
	{
		return std::string::c_str();
	}


	//�I�u�W�F�N�g��������
	inline String & String::operator=(const Object & aObject)
	{
		std::string::operator =(aObject.ToString());
		return *this;
	}

	//������������
	inline String& String::operator=(const char aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//������������
	inline String & String::operator=(const std::string & aObject)
	{
		std::string::operator =(aObject);
		return *this;
	}

	//�������������
	inline String& String::operator=(const char* aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//������𖖔��ɒǉ�����
	inline String & String::operator+=(const Object & aObject)
	{
		std::string::operator +=(aObject.ToString());
		return *this;
	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const char aObject)
	{
		std::string::operator +=(aObject);
		return *this;

	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const char* aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//������𖖔��ɒǉ�����
	inline String& String::operator+=(const String& aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	inline String & String::operator+=(const std::string & aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) == 0;
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const char* aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//�����񂪓���������r����
	inline Boolean String::operator==(const String& aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	inline Boolean String::operator==(const std::string & aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) != 0;
	}


	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const char* aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//�����񂪓������Ȃ�����r����
	inline Boolean String::operator!=(const String& aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	inline Boolean String::operator!=(const std::string & aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//���݂̗L���ȕ�����̒�����Ԃ�
	inline UInt String::Length() const
	{
		return static_cast<uint32_t>(std::string::size());
	}

	//�w�肵���ʒu�̕������擾����
	inline Char String::At(const UInt aIndex) const
	{
		if (aIndex >= 0 && aIndex < std::string::size()) {
			return std::string::at(aIndex);
		}
		//�͈͊O���w�肵���ꍇ��\0��Ԃ�
		return Char();
	}

	inline String & String::Append(const char * aObject)
	{
		std::string::append(aObject);
		return *this;
	}

	//�����ɕ������ǉ�����
	inline String & String::Append(const Object & aObject)
	{
		std::string::append(aObject.ToString());
		return *this;
	}

	//�����Ɏw��͈͕������ǉ�����
	inline String & String::Append(const Object & aObject, const Between& aBetween)
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

		std::string::append(
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);
		return *this;
	}

	inline String & String::Set(const char * aObject)
	{
		std::string::operator =(aObject);
		return *this;
	}

	//�������������
	inline String & String::Set(const Object & aObject)
	{
		std::string::operator =(aObject.ToString());
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

		std::string::assign(
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);
		return *this;
	}

	//�����񂪐����݂̂ō\������Ă��邩���ׂ�
	inline Boolean String::IsDigits() const
	{
		Boolean lDigitFlag = true;
		
		for (auto& lChar : *this) {
			if (::isdigit(lChar) == false) {
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
			if (::isalpha(lChar) == false) {
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
			if (::isdigit(lChar) == false) {
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
			if (::isdigit(lChar) == false) {
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
			::toupper(lChar);
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
			std::string::resize(0);
		}
		else {
			std::string::resize(aSize);
		}
		return *this;
	}

	//������̃L���p�V�e�B��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
	inline String & String::Reserve(const UInt aSize)
	{
		if (aSize < 0) {
			std::string::reserve(0);
		}
		else {
			std::string::reserve(aSize);
		}
		return *this;
	}

	inline String & String::Clear()
	{
		std::string::clear();
		return *this;
	}

	//�w�肵���͈͂̕�������폜����BBetween::Step���L���Ȓl�������ꍇ�́A���̃X�e�b�v���ɏ]���ĕ������폜����
	inline String & String::Erasing(const Between aBetween)
	{
		std::string::erase(aBetween.GetStart(), aBetween.GetEnd() - aBetween.GetStart());
		return *this;
	}

	//�w�肵���͈͂ŕ�������\������B
	inline String & String::Subbing(const Between aBetween)
	{
		*this=std::move(std::string::substr(aBetween.GetStart(), 
			aBetween.GetEnd() - aBetween.GetStart()
			)
		);

		return *this;
	}

	//�w�肵���͈͂̕�������擾����
	inline String String::GetSub(const Between & aBetween) const
	{
		return std::move(
			std::string::substr(
				aBetween.GetStart(), 
				aBetween.GetEnd() - aBetween.GetStart()
			)
		);
	}

	//�w��ʒu�ɕ������ǉ�����B
	inline String & String::Insert(const UInt aIndex, const Object & aObject)
	{
		std::string::insert(aIndex, aObject.ToString());
		return *this;
	}

	//�w��ʒu�ɕ������ǉ�����B
	inline String & String::Insert(const UInt aIndex, const Object & aObject, const Between & aBetween)
	{
		std::string::insert(
			aIndex, 
			aObject.ToString(),
			aBetween.GetStart(),
			aBetween.GetEnd() - aBetween.GetStart()
		);

		return *this;
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject)
	{
		std::string::insert(aIndex, aObject);
		return *this;
	}

	inline String& String::Insert(const UInt aIndex, const String& aObject, const Between& aBetween)
	{
		std::string::insert(
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
		std::string::replace(
			aReplaceBetween.GetStart(),
			aReplaceBetween.GetEnd() - aReplaceBetween.GetStart(),
			aObject.ToString()
		);
		return *this;
	}

	//�w�肵���͈͂�ʂ͈͕̔�����Œu��������
	inline String & String::Replacing(const Between & aReplaceBetween, const Object & aObject, const Between & aStringBetween)
	{
		std::string::replace(
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
		
		return static_cast<uint32_t>(std::string::find(aObject.ToString()));
	}

	//���������������
	inline UInt String::Find(const Object & aObject, const Between & aStringBetween)const
	{
		return static_cast<uint32_t>(std::string::find(
			aObject.ToString(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd()- aStringBetween.GetStart()
			));
	}

	//���������������
	inline UInt String::Find(const Object & aObject, const UInt & aStartIndex)const
	{
		return static_cast<uint32_t>(std::string::find(
			aObject.ToString(),
			aStartIndex
		));
	}

	inline UInt String::Find(const String& aObject) const
	{
		return static_cast<uint32_t>(std::string::find(aObject));
	}

	inline UInt String::Find(const String& aObject, const Between& aStringBetween) const
	{
		return static_cast<uint32_t>(std::string::find(
			aObject.c_str(),
			aStringBetween.GetStart(),
			aStringBetween.GetEnd() - aStringBetween.GetStart()
		));
	}

	inline UInt String::Find(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(std::string::find(
			aObject,
			aStartIndex
		));
	}

	//������𖖔����猟������
	inline UInt String::FindBack(const Object & aObject, const UInt & aStartIndex)const
	{
		return static_cast<uint32_t>(std::string::rfind(
			aObject.ToString(),
			aStartIndex
		));
	}

	inline UInt String::FindBack(const String& aObject, const UInt& aStartIndex) const
	{
		return static_cast<uint32_t>(std::string::rfind(
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
