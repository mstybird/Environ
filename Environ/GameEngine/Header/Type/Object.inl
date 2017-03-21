#include <Type\String.hpp>

namespace Environ {
	String Environ::Object::ToString() const
	{
		return typeid(*this).name();
	}

}