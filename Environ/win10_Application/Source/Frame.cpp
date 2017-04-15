#include <System\Window.hpp>
#include <System\CoreSystem.hpp>

#include "__Window.hpp"
#include"__Frame.hxx"

int Environ::Frame::Create(const int aParent,
	const int aPosX,
	const int aPosY,
	const int aWidth,
	const int aHeight,
	const String& aIDString)
{
	auto lWindow = wxWindow::FindWindowById(aParent);
	//‘¶Ý‚µ‚Ä‚¢‚ê‚Îì¬‚µ‚Ä‚»‚ÌƒtƒŒ[ƒ€(wxPanel)‚ÌID‚ð•Ô‚·
	//‚µ‚Ä‚¢‚È‚¯‚ê‚Îì¬‚¹‚¸0‚ð•Ô‚·
	if (!lWindow)return 0;
	auto lFrame = new __Frame(lWindow, aPosX, aPosY, aWidth, aHeight, aIDString);
	lFrame->GetParent();
	return -1;
}/*lFrame->GetId();
		   
}*/

