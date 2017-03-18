#include "..\..\GameEngine\Header\Type\String.hpp"
#include "..\..\GameEngine\Header\Type\String.hpp"
#include <Type\String.hpp>

namespace Environ {

	//�󕶎���ŏ�����
	String::String():std::string("")
	{
	}

	//�L���p�V�e�B���w�肵�Ă��當����ŏ���������
	String::String(const Int aCapacity):std::string("")
	{

		if (aCapacity > 0)std::string::reserve(aCapacity);
	}

	//�����ŏ���������
	String::String(const char aObject)
	{
		//char�ŏ������ł���R���X�g���N�^���Ȃ������̂�operator==�ő�p
		std::string::operator =(aObject);
	}

	//const char*������ŏ���������
	String::String(const char * aObject):std::string(aObject)
	{
		
	}

	//�I�u�W�F�N�g�ŏ���������
	String::String(const Object & aObject):std::string(aObject.ToString())
	{
	}

	//�I�u�W�F�N�g�ŏ��������A�L���p�V�e�B��ݒ肷��
	String::String(const Object & aObject, const Int aCapacity): std::string(aObject.ToString())
	{
		if (aCapacity > 0)std::string::reserve(aCapacity);
	}

	//���ɂȂ�
	String::~String()
	{
	}

	//const char*������|�C���^��Ԃ�
	String::operator const char*()
	{
		return std::string::c_str();
	}


	//�I�u�W�F�N�g��������
	String & String::operator=(const Object & aObject)
	{
		std::string::operator =(aObject.ToString());
		return *this;
	}

	//������������
	String& String::operator=(const char aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//�������������
	String& String::operator=(const char* aObject)
	{
		std::string::operator =(aObject);
		return *this;

	}

	//������𖖔��ɒǉ�����
	String & String::operator+=(const Object & aObject)
	{
		std::string::operator +=(aObject.ToString());
		return *this;
	}

	//������𖖔��ɒǉ�����
	String& String::operator+=(const char aObject)
	{
		std::string::operator +=(aObject);
		return *this;

	}

	//������𖖔��ɒǉ�����
	String& String::operator+=(const char* aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//������𖖔��ɒǉ�����
	String& String::operator+=(const String& aObject)
	{
		std::string::operator +=(aObject);
		return *this;
	}

	//�����񂪓���������r����
	Boolean String::operator==(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) == 0;
	}

	//�����񂪓���������r����
	Boolean String::operator==(const char* aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//�����񂪓���������r����
	Boolean String::operator==(const String& aObject) const
	{
		return std::string::compare(aObject) == 0;
	}

	//�����񂪓������Ȃ�����r����
	Boolean String::operator!=(const Object & aObject)const
	{
		return std::string::compare(aObject.ToString()) != 0;
	}


	//�����񂪓������Ȃ�����r����
	Boolean String::operator!=(const char* aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//�����񂪓������Ȃ�����r����
	Boolean String::operator!=(const String& aObject) const
	{
		return std::string::compare(aObject) != 0;
	}

	//���݂̗L���ȕ�����̒�����Ԃ�
	Int String::Length() const
	{
		return std::string::size();
	}

	//�w�肵���ʒu�̕������擾����
	Char String::At(const Int aIndex) const
	{
		if (aIndex >= 0 && aIndex < std::string::size())return std::string::at(aIndex);

		//�͈͊O���w�肵���ꍇ��\0��Ԃ�
		return Char();
	}

	//�����ɕ������ǉ�����
	String & String::Append(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�����Ɏw��͈͕������ǉ�����
	String & String::Append(const Object &, const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�������������
	String & String::Set(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w��͈͕������������
	String & String::Set(const Object &, const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�����񂪐����݂̂ō\������Ă��邩���ׂ�
	Boolean String::IsDigits() const
	{
		return Boolean();
	}

	//�����񂪔��p�A���t�@�x�b�g�݂̂ō\������Ă��邩���ׂ�
	Boolean String::IsAlpha() const
	{
		return Boolean();
	}

	//�����񂪔��p�A���t�@�x�b�g�̑啶���݂̂ō\������Ă��邩���ׂ�
	Boolean String::IsUpper() const
	{
		return Boolean();
	}

	//�����񂪔��p�A���t�@�x�b�g�̏������݂̂ō\������Ă��邩���ׂ�
	Boolean String::IsLower() const
	{
		return Boolean();
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ���
	String & String::Uppering()
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ���
	String & String::Lowering()
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ������̂��擾����
	String String::GetUpper() const
	{
		return String();
	}

	//���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ������̂��擾����
	String String::GetLower() const
	{
		return String();
	}

	//���ۂ̕�����̃T�C�Y��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
	String & String::Resize(const Int aSize)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//������̃L���p�V�e�B��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
	String & String::Reserve(const Int aSize)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w�肵���͈͂̕�������폜����BBetween::Step���L���Ȓl�������ꍇ�́A���̃X�e�b�v���ɏ]���ĕ������폜����
	String & String::Erasing(const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w�肵���͈͂ŕ�������\������B
	String & String::Subbing(const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w�肵���͈͂̕�������擾����
	String String::GetSub(const Between & aBetween) const
	{
		return String();
	}

	//�w��ʒu�ɕ������ǉ�����B
	String & String::Insert(const Int aIndex, const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w��ʒu�ɕ������ǉ�����B
	String & String::Insert(const Int aIndex, const Object &, const Between & aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w�肵���͈͂�ʂ̕�����Œu��������
	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//�w�肵���͈͂�ʂ̕�����Œu��������
	String & String::Replacing(const Between & aReplaceBetween, const String &, const Between & aStringBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	//���������������
	Int String::Find(const Object &, const Between & aFindBetween)const
	{
		return Int();
	}

	//���������������
	Int String::Find(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	//������𖖔����猟������
	Int String::FindBack(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	//��������r����
	Boolean String::Equal(const Object & aValue) const
	{
		return false;
	}


	//��������擾���遦�񐄏�
	String String::ToString() const
	{
		return *this;
	}

}
