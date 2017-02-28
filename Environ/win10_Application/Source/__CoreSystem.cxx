#include "__CoreSystem.hxx"
#include <sal.h>
#include <wtypes.h>

bool Environ::CoreSystem::__CoreSystem::OnInit()
{
	Bind(wxEVT_IDLE, &__CoreSystem::OnIdle, this);
	return CoreSystem::SetupWizard();
	
}

void Environ::CoreSystem::__CoreSystem::OnIdle(wxIdleEvent & event)
{

}



#include <stdlib.h> 
#include <crtdbg.h>  
wxIMPLEMENT_APP_NO_MAIN(Environ::CoreSystem::__CoreSystem);
int __stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) {
	//メモリリーク検知用
	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
	wxEntry(hInstance, hPrevInstance, lpCmdLine, nShowCmd);

	return 0;
}