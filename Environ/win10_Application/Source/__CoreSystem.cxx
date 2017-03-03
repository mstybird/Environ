#include "__CoreSystem.hxx"
#include <sal.h>
#include <wtypes.h>

std::function<bool()> Environ::CoreSystem::__CoreSystem::sSetupFumction;

bool Environ::CoreSystem::__CoreSystem::OnInit()
{
	Bind(wxEVT_IDLE, &__CoreSystem::OnIdle, this);
	return sSetupFumction();
	
}

void Environ::CoreSystem::__CoreSystem::OnIdle(wxIdleEvent &)
{

}

void Environ::CoreSystem::__CoreSystem::SettingWizardFunction(std::function<bool()> aFunction)
{
	sSetupFumction = aFunction;
}



