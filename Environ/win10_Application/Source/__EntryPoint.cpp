#include "__EntryPoint.hxx"
#include "__CoreSystem.hxx"
#include "wx\init.h"
#include <wtypes.h>


wxIMPLEMENT_APP_NO_MAIN(Environ::CoreSystem::__CoreSystem);
int __Startup(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd, std::function<bool()> aFunction)
{
	//wxApp���쐬�����ۂɌĂяo�����Z�b�g�A�b�v�֐��̓o�^
	Environ::CoreSystem::__CoreSystem::SettingWizardFunction(aFunction);
	return wxEntry(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
}
