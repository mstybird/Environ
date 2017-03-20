#pragma once
/**
	@file Object.hpp
	@date Create for 2017/03/14 15:55

	@author msty

	@brief 組み込み型拡張クラス以外のすべてのクラスが持つ基底オブジェクト
*/
//#include"String.hpp"
namespace Environ {
	class String;
	class Object {
	public:
		Object() {};
		~Object() {};
		virtual String ToString()const;
	};
}
