#pragma once
#include "System\Window.hpp"
/**
	@file LayerGUI.hpp
	@date Create for 2017/03/04 18:04

	@author msty

	@brief GUIレイヤークラスファイル
*/

namespace Environ
{
	/**
		@class LayerGUI
		@brief GUIレイヤー。GUIパーツ関係はこちらを使う
	*/
	class LayerGUI
	{
	public:

		/**
			@file LayerGUI.hpp
			@date Create for 2017/03/04 18:24
		
			@author msty
		
			@brief GUIレイヤーを作成する。
		*/
		static int Create(Window*& aParent);
	protected:
	private:
		LayerGUI();
		~LayerGUI();
		class __LayerGUI;
		__LayerGUI* $;
	};
}