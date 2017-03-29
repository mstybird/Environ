#pragma once

namespace Environ {
	inline String Environ::Object::ToString() const
	{
		return typeid(*this).name();
	}

}