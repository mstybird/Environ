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
		// TODO: return ステートメントをここに挿入します
	}

	String & String::operator+=(const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	Boolean String::operator==(const Object & aObject)const
	{
		// TODO: return ステートメントをここに挿入します
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
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Append(const Object &, const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Set(const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Set(const Object &, const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
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
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Lowering()
	{
		// TODO: return ステートメントをここに挿入します
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
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Reserve(const Int aSize)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Erasing(const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Subbing(const Between aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String String::GetSub(const Between & aBetween) const
	{
		return String();
	}

	String & String::Insert(const Int aIndex, const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Insert(const Int aIndex, const Object &, const Between & aBetween)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Replacing(const Between & aReplaceBetween, const Object & aObject)
	{
		// TODO: return ステートメントをここに挿入します
	}

	String & String::Replacing(const Between & aReplaceBetween, const String &, const Between & aStringBetween)
	{
		// TODO: return ステートメントをここに挿入します
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
