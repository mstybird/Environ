#pragma once

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


	String Boolean::ToString() const
	{
		return String();
	}
}