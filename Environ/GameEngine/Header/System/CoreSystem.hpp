#pragma once

/**
	@file CoreSystem.hpp
	@date Create for 2017/03/03 23:26

	@author msty

	 * @brief アプリケーションを管理しているクラス。
	 アプリケーション単位で処理する際に使用。
*/

#include <sal.h>
#include <wtypes.h>
namespace Environ {
	//アプリケーション全体のシステム
	/**
	 * @class CoreSystem
	 *
	@brief アプリケーション全体に影響する処理、もしくはアプリケーションからデータを取得する際に使用。
	このクラスはインスタンス化できない
	*/
	class CoreSystem
	{
	public:
		/**< OS固有のシステムを定義 */
		class __CoreSystem;
	private:
		/**
			@brief 使用しない		
		*/
		CoreSystem();
		/**
		@brief 使用しない
		*/
		~CoreSystem();

	};

}