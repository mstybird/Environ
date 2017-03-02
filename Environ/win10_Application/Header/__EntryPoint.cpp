#include "__EntryPoint.hxx"
#include "wx\app.h"
#include "__CoreSystem.hxx"
#include "wx\init.h"

wxIMPLEMENT_APP_NO_MAIN(Environ::CoreSystem::__CoreSystem);
void __Startup(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd, std::function<bool()> aFunction)
{
	Environ::CoreSystem::__CoreSystem::AddSetupFunction(aFunction);
	wxEntry(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
}
