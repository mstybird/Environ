#include "..\..\GameEngine\Header\Type\Boolean.hpp"
#include "..\..\GameEngine\Header\Type\Boolean.hpp"
#include "..\..\GameEngine\Header\Type\Boolean.hpp"
#include <Type/Boolean.hpp>
#include <Type/String.hpp>

namespace Environ {
	Environ::Boolean::Boolean()
	{
	}
	Boolean::~Boolean()
	{
	}
	Boolean::operator bool() const
	{
		return mValue;
	}
	Boolean::operator const bool&() const
	{
		return mValue;
	}
	Boolean::operator const bool() const
	{
		return mValue;
	}


	String Boolean::ToString() const
	{
		return String();
	}
}