#pragma once

/**
	@file Scene.hpp
	@date Create for 2017/03/03 23:32

	@author msty

	@brief ウィンドウを管理するクラスの定義をしているファイル。

*/

#include<Configure/DLLSettings.hpp>

namespace Environ {
	/**
	 * @class Scene
	 *
	 * @brief 一画面を表すシーン(基本的に継承して使う)
		直接インスタンス化することはできず、ウィンドウ生成にはCreateメソッドを用いる。
	*/
	class Window
	{
	public:
		/**
			@brief 親無しでウィンドウを生成する

			@param aWindowTitle	ウィンドウタイトル
			@param aPositionX	ウィンドウ位置X
			@param aPositionY	ウィンドウ位置Y
			@param aWidht	クライアント幅
			@param aHeight	クライアント高さ
			@return 生成に成功すればウィンドウIDが帰る。失敗の場合は 0

		*/
		DllEntry static int Create(const char* aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);

		/**
			@brief ウィンドウのクライアントサイズ幅を取得する
			
			@param 存在するウィンドウのID
			@return クライアントサイズ幅。ウィンドウIDが不正な場合は0
		
		*/
		DllEntry static int GetClientWidth(const int aWindowId);

	private:
		Window() {}
		~Window() {}

		class __Window;

	};
}


