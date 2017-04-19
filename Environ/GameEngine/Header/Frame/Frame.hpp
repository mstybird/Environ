#pragma once
#include<Configure/DLLSettings.hpp>
//ウィンドウの子ウィンドウとなるフレーム
//Windowで管理する
namespace Environ {
	class Window;
	class Frame {
	public:
		DllEntry static bool Create(
			const int aParent,
			const int aPosX,
			const int aPosY,
			const int aWidth,
			const int aHeight,
			const std::string& aIDString);


	protected:
	private:
		Frame();
		~Frame();
		class __Frame;
		__Frame* $;

	};
}
