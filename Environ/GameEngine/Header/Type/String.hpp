#pragma once

#include "Char.hpp"
#include "Integer.hpp"
#include "InterFace\IEquateble.hpp"
#include "BetweenValue.hpp"
#include "Boolean.hpp"

#include<string>

namespace Environ {
	/**
		@class String
		@brief std::String‚ÌŠg’£
	*/
	class String:
		std::u16string,
		public IEquateble<Object>
	{
	public:
		String();
		String(const Int aCapacity);
		String(const char* aObject);
		String(const Object& aObject);
		String(const Object& aObject,const Int aCapacity);
		~String();

		operator const char*();

		String& operator=(const Object& aObject);

		String& operator+=(const Object& aObject);

		Boolean operator==(const Object& aObject);
		Boolean operator!=(const Object& aObject);

		Int Length()const;
		Char At(const Int aIndex)const;

		String& Append(const Object& aObject);
		String& Append(const Object&, const Between aBetween);

		String& Set(const Object& aObject);
		String& Set(const Object&, const Between aBetween);

		Boolean IsDigits()const;
		Boolean IsAlpha()const;
		Boolean IsUpper()const;
		Boolean IsLower()const;

		String& Uppering();
		String& Lowering();
		String  GetUpper()const;
		String  GetLower()const;

		String& Resize(const Int aSize);
		String& Reserve(const Int aSize);

		String& Erasing(const Between aBetween);

		String& Subbing(const Between aBetween);

		String GetSub(const Between& aBetween)const;

		String& Insert(const Int aIndex,const Object& aObject);
		String& Insert(const Int aIndex,const Object&, const Between& aBetween);

		String& Replacing(const Between& aReplaceBetween, const Object& aObject);
		String& Replacing(const Between& aReplaceBetween, const String&, const Between& aStringBetween);

		Int Find(const Object&, const Between& aFindBetween);
		Int Find(const Object&, const Int& aStartIndex);
		Int FindBack(const Object&, const Int& aStartIndex);


		virtual Boolean Equal(const Object& aValue)const override;

	protected:
	private:
	};
}