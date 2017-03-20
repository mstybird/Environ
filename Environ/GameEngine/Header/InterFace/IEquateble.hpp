#pragma once

/**
	@file IEquateble.hpp
	@date Create for 2017/03/14 15:36

	@author msty

	@brief 比較を行うインターフェース

*/
//#include"Type/Boolean.hpp"
namespace Environ {
	/**
		@class IEquateble
		@brief 比較を行うインターフェーステンプレート
	*/

	class Boolean;

	template<typename T>
	class IEquateble
	{
	public:
		IEquateble() {}
		virtual ~IEquateble() {}
		virtual Boolean Equal(const T& aValue)const = 0;
	protected:
	private:
	};
}