#pragma once
#include "InterFace\IEquateble.hpp"
#include "Object.hpp"
//#include"String.hpp"
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
		Boolean(const bool aValue) {}
		~Boolean();

		operator bool()const;
		operator const bool&()const;

		virtual Boolean Equal(const bool& aValue)const override {}
		virtual Boolean Equal(const Boolean& aValue)const override {}
	protected:
	private:

		virtual String ToString()const override;
		bool mValue;
	};
}