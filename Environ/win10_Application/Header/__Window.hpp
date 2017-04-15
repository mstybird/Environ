#pragma once

/**
	@file __Scene.hpp
	@date Create for 2017/03/03 23:18

	@author msty

	@brief 親ウィンドウの定義をしているファイル
*/

#include <System\Window.hpp>

namespace Environ {
	//
	/**
		@brief wxFrameを継承する親となるウィンドウ(アプリ実装側はバグ修正や仕様追加リクエストをする場合のみ触る)
		
		@param 
		@return 
	
	*/
	class Window::__Window :public wxFrame{
	public:
		/**
			@brief Windowの初期化
			現在は表示まで行っているが、切り分ける予定
			
			@param aWindowTitle ウィンドウタイトル
			@param aPositionX ウィンドウ位置
			@param aPositionY ウィンドウ位置
			@param aWidth ウィンドウサイズ
			@param aHeight ウィンドウサイズ

		*/
		__Window(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);

		/**
			@brief このクラスで定義したものがあり、明示的に開放の必要がある場合、
			こちらにまとめる
		*/
		virtual ~__Window();

	private:
	};
	
}