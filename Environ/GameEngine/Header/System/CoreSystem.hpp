#pragma once
#include <sal.h>
#include <wtypes.h>
namespace Environ {
	//アプリケーション全体のシステム
	/**
	 * @class CoreSystem
	 *
	 * @brief 
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