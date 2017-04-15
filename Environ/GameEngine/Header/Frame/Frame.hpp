#pragma once
#include"Type\String.hpp"
#include<Configure/DLLSettings.hpp>
//ウィンドウの子ウィンドウとなるフレーム
//Windowで管理する
namespace Environ {
	class Window;
	class Frame {
	public:
		DllEntry static int Create(
			const int aParent,
			const int aPosX,
			const int aPosY,
			const int aWidth,
			const int aHeight,
			const String& aIDString);


	protected:
	private:
		Frame();
		~Frame();
		class __Frame;
		__Frame* $;

	};
}
