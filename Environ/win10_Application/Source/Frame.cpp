#include <System\Window.hpp>
#include <System\CoreSystem.hpp>

#include "__Window.hpp"
#include"__Frame.hxx"

bool Environ::Frame::Create(const int aParent,
	const int aPosX,
	const int aPosY,
	const int aWidth,
	const int aHeight,
	const std::string& aIDString)
{
	auto lWindow = wxWindow::FindWindowById(aParent);
	//‘¶İ‚µ‚Ä‚¢‚ê‚Îì¬‚µ‚Ä‚»‚ÌƒtƒŒ[ƒ€(wxPanel)‚ÌID‚ğ•Ô‚·
	//‚µ‚Ä‚¢‚È‚¯‚ê‚Îì¬‚¹‚¸0‚ğ•Ô‚·
	if (!lWindow)return false;
	auto lFrame = new __Frame(lWindow, aPosX, aPosY, aWidth, aHeight, aIDString);
	return true;
}

