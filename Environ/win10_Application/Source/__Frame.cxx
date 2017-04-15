#include "__Frame.hxx"

Environ::Frame::__Frame::__Frame(wxWindow * aWindowPtr, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight,const String& aIdString) :wxPanel(aWindowPtr, wxID_ANY, { aPositionX,aPositionY }, { aWidth,aHeight }, wxTAB_TRAVERSAL,aIdString)
{
	
	this->SetBackgroundColour({ 0,0,255 });
}
