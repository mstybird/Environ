#include "__Frame.hxx"

Environ::Frame::__Frame::__Frame(wxWindow * aWindowPtr, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight,const std::string& aIdString) :wxPanel(aWindowPtr, wxID_ANY, { aPositionX,aPositionY }, { aWidth,aHeight }, wxTAB_TRAVERSAL,aIdString)
{
	
	this->SetBackgroundColour(wxColour(*wxRED));
	this->ClearBackground();
}
