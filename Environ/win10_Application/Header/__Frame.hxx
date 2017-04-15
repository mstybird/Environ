#pragma once
#include<Frame\Frame.hpp>


namespace Environ {
	class Frame::__Frame: public wxPanel {
	public:
		//スタイル指定も追加予定
		__Frame(wxWindow* aWindowPtr, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight,const String& aIdString);

		int GetId();

	private:


	};
}