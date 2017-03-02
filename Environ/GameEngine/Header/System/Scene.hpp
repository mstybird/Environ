#pragma once
#include<memory>
#include<Configure/DLLSettings.hpp>

namespace Environ {
	/**
	 * @class Scene
	 *
	 * @brief 一画面を表すシーン(基本的に継承して使う)
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


		static int GetClientWidth(const int aWindowId);

	private:
		Window() {}
		~Window() {}
	
		class __Window;
	
	};
}


