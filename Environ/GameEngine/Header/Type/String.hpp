#pragma once

#include "InterFace\IEquateble.hpp"
#include"Object.hpp"
#include "Integer.hpp"

#include<string>
#include<vector>

namespace Environ {

	class Char;
	class Between;
	class Boolean;

	/**
		@class String
		@brief std::String�̊g��


		//�v����
		�C�e���[�^�̌��ˍ����ňꎞ�I��std:string��public�p�����Ă���(�C���ŏd�v���e)

	*/
	class String:
		public IEquateble<std::string>,
		public IEquateble<Object>,
		public IEquateble<String>,
		public Object
	{
	public:

		//�C�e���[�^
		using Iteletor = std::vector<Char>::iterator;
		using IteletorConst = std::vector<Char>::const_iterator;
		using IteletorReverse = std::vector<Char>::reverse_iterator;
		using IteletorReverseConst = std::vector<Char>::const_reverse_iterator;



		/**
		@brief �󕶎�����쐬����
		*/
		String();

		/**
		@brief
		@param �L���p�V�e�B�B�����������񕶎�����菬�����l���w�肵���ꍇ�͖��������B
		*/
		String(const Int aCapacity);

		/**
		@brief
		@param ����������
		*/
		String(const char aObject);

		/**
		@brief �w�蕶����ŏ�����(������push_back���g���Ă��邽�ߒx��)
		@param ������������
		*/
		String(const char* aObject);

		/**
		@brief
		@param ������������
		*/
		String(const std::string& aObject);

		/**
		@brief
		@param ������������
		*/
		String(const Object& aObject);

		/**
		@brief �w�肵��������ŏ�����
		@param ������������
		@param �L���p�V�e�B�B�����������񕶎�����菬�����l���w�肵���ꍇ�͖��������B
		*/
		String(const Object& aObject,const Int aCapacity);

		/**
		@brief
		@param ������������
		*/
		String(const std::vector<Char>& aObject);


		/**
		@brief ������J������
		*/
		~String();

		Iteletor begin();
		IteletorConst begin()const;
		IteletorConst cbegin()const;
		IteletorReverse rbegin();
		IteletorReverseConst rcbegin()const;

		Iteletor end();
		IteletorConst end()const;
		IteletorConst cend()const;
		IteletorReverse rend();
		IteletorReverseConst rcend()const;

		/**
		@brief const char*�`���̕�������擾����
		@return ���̕������const char�|�C���^
		*/
		operator const char*()const;
		operator const Char*()const;

		//�g�ݍ��݉��Z�q�̓s����A�g�ݍ��݌^���g�p
		Char& operator[](int aIndex)const;


		/**
		@brief �w�蕶�����������
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator=(const Object& aObject);

		/**
		@brief �w�蕶�����������
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator=(const char* aObject);

		/**
		@brief �w�蕶����������
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator=(const char aObject);

		/**
		@brief �w�蕶�����������
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator=(const std::string& aObject);


		/**
		@brief �����ɕ������ǉ�����
		@param	�ǉ�������I�u�W�F�N�g
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const Object& aObject);

		/**
		@brief �����ɕ������ǉ�����
		@param	�ǉ�������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const String& aObject);

		/**
		@brief �����ɕ������ǉ�����
		@param	�ǉ�������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const std::string& aObject);


		/**
		@brief �����ɕ������ǉ�����
		@param	�ǉ�������I�u�W�F�N�g
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const char* aObject);

		/**
		@brief �����ɕ������ǉ�����
		@param	�ǉ�������I�u�W�F�N�g
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const char aObject);


		/**
		@brief	��������r����
		@param	��r�p������
		@return ���S��v�����true�B����ȊO��false
		*/
		Boolean operator==(const Object& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return ���S��v�����true�B����ȊO��false
		*/
		Boolean operator==(const char* aObject)const;


		/**
		@brief	��������r����
		@param	��r�p������
		@return ���S��v�����true�B����ȊO��false
		*/
		Boolean operator==(const String& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return ���S��v�����true�B����ȊO��false
		*/
		Boolean operator==(const std::string& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return	���S��v���Ȃ����true�B��v�����ꍇ��false
		*/
		Boolean operator!=(const Object& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return	���S��v���Ȃ����true�B��v�����ꍇ��false
		*/
		Boolean operator!=(const char* aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return	���S��v���Ȃ����true�B��v�����ꍇ��false
		*/
		Boolean operator!=(const String& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return	���S��v���Ȃ����true�B��v�����ꍇ��false
		*/
		Boolean operator!=(const std::string& aObject)const;

		/**
		@brief ������̒������擾����
		@return ������̒���(�o�C�g��)
		*/
		UInt Length()const;

		/**
		@brief	�w�肵���ʒu�̕������擾����
		@param	�ʒu�ƂȂ�C���f�N�X�B
		@return �w��C���f�N�X���w�������B
				�͈͊O�A�N�Z�X�������ꍇ��'\0'��Ԃ�
		*/
		Char At(const UInt aIndex)const;

		/**
		@brief �����ɕ������ǉ�����
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Append(const char* aObject);

		/**
		@brief �����ɕ������ǉ�����
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Append(const Object& aObject);

		/**
		@brief	�����ɕ������ǉ�����
		@param	�ǉ����镶����
		@param	�ǉ����镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Append(const Object&, const Between& aBetween);

		/**
		@brief	�������������
		@param	������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Set(const char* aObject);

		/**
		@brief	�������������
		@param	������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Set(const Object& aObject);

		/**
		@brief
		@param	������镶����
		@param	������镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Set(const Object&, const Between& aBetween);


		/**
		@brief	�����񂪐����݂̂ō\������Ă��邩���ׂ�
		@return	�����݂̂������ꍇ��true��Ԃ�
		*/
		Boolean IsDigits()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�݂̂������ꍇ��true��Ԃ�
		*/
		Boolean IsAlpha()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�̑啶���݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�̑啶���݂̂������ꍇtrue��Ԃ�
		*/
		Boolean IsUpper()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�̏������݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�̏������݂̂������ꍇtrue��Ԃ�
		*/
		Boolean IsLower()const;


		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ���
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Uppering();

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ���
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Lowering();

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ������̂��擾����
		@return �ϊ����ꂽ������
		*/
		String  GetUpper()const;

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ������̂��擾����
		@return �ϊ����ꂽ������
		*/
		String  GetLower()const;


		/**
		@brief	���ۂ̕�����̃T�C�Y��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
		@param	�ύX��̃T�C�Y
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Resize(const UInt aSize);

		/**
		@brief	������̃L���p�V�e�B��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A�ω����Ȃ�
		@param	�ύX��̃L���p�V�e�B
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Reserve(const UInt aSize);

		/**
		@brief	����������ׂč폜����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Clear();

		/**
		@brief	�w�肵���͈͂̕�������폜����BBetween::Step�͌��󖳎������
		@param	�͈͎w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Erasing(const Between& aBetween);


		/**
		@brief	�w�肵���͈͂ŕ�������\������B
				Between::Step�͌��󖳎������
				�����Ȕ͈͂������ꍇ(�J�n�C���f�N�X��-1��)�́A�L���Ȕ͈͂Ɏ��܂�悤�ɒ��������B
			
		@param	�͈͎w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Subbing(const Between& aBetween);


		/**
		@brief	�w�肵���͈͂̕�������擾����
				Between::Step�͌��󖳎������
				�����Ȕ͈͂������ꍇ(�J�n�C���f�N�X��-1��)�́A�L���Ȕ͈͂Ɏ��܂�悤�ɒ��������B
		@param	�͈͎w��C���X�^���X
		@return	�͈͕�����
		*/
		String GetSub(const Between& aBetween)const;


		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const UInt aIndex,const Object& aObject);

		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@param	�ǉ����镶����͈͎̔w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const UInt aIndex,const Object&, const Between& aBetween);

		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const UInt aIndex, const String& aObject);

		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@param	�ǉ����镶����͈͎̔w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const UInt aIndex, const String&, const Between& aBetween);


		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�A�擪or������͈͂̐擪�E�I�[�ɐݒ肳���B
		@param	�u�������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const Object& aObject);

		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@param	�u�������镶����
		@param	�u�������镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const Object&, const Between& aStringBetween);

		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�A�擪or������͈͂̐擪�E�I�[�ɐݒ肳���B
		@param	�u�������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const String& aObject);

		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@param	�u�������镶����
		@param	�u�������镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const String&aObject, const Between& aStringBetween);

		/**
		@brief	���������������
		@param	����������
		@param	�����͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const Object& aObject)const;

		/**
		@brief	���������������
		@param	����������
		@param	�������镶����͈̔́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
				������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const Object& aObject, const Between& aStringBetween)const;

		/**
		@brief	���������������
		@param	����������
		@param	�����J�n�ʒu�B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const Object& aObject, const UInt& aStartIndex)const;

		/**
		@brief	���������������
		@param	����������
		@param	�����͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const String& aObject)const;

		/**
		@brief	���������������
		@param	����������
		@param	�������镶����͈̔́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const String& aObject, const Between& aStringBetween)const;

		/**
		@brief	���������������
		@param	����������
		@param	�����J�n�ʒu�B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt Find(const String& aObject, const UInt& aStartIndex)const;



		/**
		@brief	������𖖔����猟������
		@param	����������
		@param	�����J�n�ʒu�B������0�Ƃ���B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt FindBack(const Object& aObject, const UInt& aStartIndex)const;

		/**
		@brief	������𖖔����猟������
		@param	����������
		@param	�����J�n�ʒu�B������0�Ƃ���B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		UInt FindBack(const String& aObject, const UInt& aStartIndex)const;



		/**
		@brief	��������r����
		@param	��r������
		@return	���S��v�����trour���Ԃ�B
		*/
		virtual Boolean Equal(const Object& aValue)const override;

		/**
		@brief	��������r����
		@param	��r������
		@return	���S��v�����trour���Ԃ�B
		*/
		virtual Boolean Equal(const String& aValue)const override;

		virtual Boolean Equal(const std::string& aValue) const override;

		/**
		@brief	��������r����
		@param	��r������
		@return	���S��v�����trour���Ԃ�B
		*/
		virtual Boolean Equal(const char*& aValue) const;


		/**
		@brief	�C���f�b�N�X�����̕�����͈͓̔��Ɏ��܂邩���ׂ�
		@param	�͈͎w��Between
		@return	�͈͓��Ȃ�true�B�͈͊O�Ȃ�false
		*/
		bool IsRange(const Between& aBetween)const;


		/**
		@brief	�C���f�b�N�X�����̕�����͈͓̔��Ɏ��܂邩���ׂ�
		@param	�C���f�b�N�X
		@return	�͈͓��Ȃ�true�B�͈͊O�Ȃ�false
		*/
		bool IsRange(const UInt& aIndex)const;


	private:
		/**
		@brief	��������擾���遦�񐄏�
		@param	��r������
		@return	���S��v�����trour���Ԃ�B
		*/
		[[deprecated]]
		virtual String ToString() const override;

		std::vector<Char> mValue;	//�����ň���������C���X�^���X

	protected:
	};
}

