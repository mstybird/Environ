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
	}
	bool Boolean::Equal(const bool & aValue) const
	{
		return false;
	}
	bool Boolean::Equal(const Boolean & aValue) const
	{
		return false;
	}
	String Boolean::ToString() const
	{
		return String();
	}
}