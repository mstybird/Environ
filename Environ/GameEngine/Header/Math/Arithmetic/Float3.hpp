#pragma once

/**
@file CoreSystem.hpp
@date Create for 2017/03/03 23:26

@author msty

* @brief アプリケーションを管理しているクラス。
アプリケーション単位で処理する際に使用。
*/

#include<memory>

namespace Environ {

	/*
		Float型の値3つの汎用クラス
	*/
	class Float3 {
	public:
		Float3();
		virtual ~Float3();
		
		Float3& Add(const float aX, const float aY, const float aZ);



	private:
		class __Float3;
		std::unique_ptr<__Float3>$;

	public:
		float& x;
		float& y;
		float& z;

	};


}
