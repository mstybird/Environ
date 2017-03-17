#pragma once
/**
	@file IParseble.hpp
	@date Create for 2017/03/14 22:47

	@author msty

	@brief 型変換インターフェース
*/

namespace Environ {
	template<typename ReturnType,typename ParseType>
	class IParseble {
		ReturnType Parse(const ParseType aObject) = 0;
	};
}