#include "..\..\GameEngine\Header\Type\String.hpp"
#include <Type\String.hpp>

namespace Environ {

	String::String()
	{
	}

	String::String(const Int aCapacity)
	{
	}

	String::String(const char * aObject)
	{
	}

	String::String(const Object & aObject)
	{
	}

	String::String(const Object & aObject, const Int aCapacity)
	{
	}

	String::~String()
	{
	}

	String::operator const char*()
	{
	}

	String & String::operator=(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::operator+=(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	Boolean String::operator==(const Object & aObject)const
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	Boolean String::operator!=(const Object & aObject)const
	{
		return Boolean();
	}

	Int String::Length() const
	{
		return Int();
	}

	Char String::At(const Int aIndex) const
	{
		return Char();
	}

	String & String::Append(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Append(const Object &, const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Set(const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Set(const Object &, const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	Boolean String::IsDigits() const
	{
		return Boolean();
	}

	Boolean String::IsAlpha() const
	{
		return Boolean();
	}

	Boolean String::IsUpper() const
	{
		return Boolean();
	}

	Boolean String::IsLower() const
	{
		return Boolean();
	}

	String & String::Uppering()
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Lowering()
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String String::GetUpper() const
	{
		return String();
	}

	String String::GetLower() const
	{
		return String();
	}

	String & String::Resize(const Int aSize)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Reserve(const Int aSize)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Erasing(const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Subbing(const Between aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String String::GetSub(const Between & aBetween) const
	{
		return String();
	}

	String & String::Insert(const Int aIndex, const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Insert(const Int aIndex, const Object &, const Between & aBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	String & String::Replacing(const Between & aReplaceBetween, const String &, const Between & aStringBetween)
	{
		// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	}

	Int String::Find(const Object &, const Between & aFindBetween)const
	{
		return Int();
	}

	Int String::Find(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	Int String::FindBack(const Object &, const Int & aStartIndex)const
	{
		return Int();
	}

	Boolean String::Equal(const Object & aValue) const
	{
		return false;
	}


}
