#pragma once
#include "Object.hpp"
#include "InterFace\IEquateble.hpp"
/**
	@file Boolean.hpp
	@date Create for 2017/03/14 16:07

	@author msty

	@brief boolå^ägí£
*/

namespace Environ {
	/**
		@class Boolean
		@brief boolå^ägí£ÉNÉâÉX
	*/
	class Boolean:
		public Object,
		public IEquateble<bool>,
		public IEquateble<Boolean>
	{
	public:
		Boolean();
		~Boolean();

		operator bool()const;

		virtual bool Equal(const bool& aValue)const override;
		virtual bool Equal(const Boolean& aValue)const override;
	protected:
	private:

		virtual String ToString()const override;
		bool mValue;
	};
}