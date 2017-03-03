#include "__CoreSystem.hxx"
#include <sal.h>
#include <wtypes.h>

std::function<bool()> Environ::CoreSystem::__CoreSystem::sSetupFumction; /* �Z�b�g�A�b�v�֐��̎��̉� */

/*
	�C�x���g�̓o�^�Ȃ�
*/
bool Environ::CoreSystem::__CoreSystem::OnInit()
{
	//�t���[���P�ʂŏ�������C�x���g�̓o�^
	Bind(wxEVT_IDLE, &__CoreSystem::OnIdle, this);
	//�A�v���P�[�V�������Ŏ��������Z�b�g�A�b�v�֐��̌��ʂ�Ԃ�
	return sSetupFumction();
	
}

/*
	�A�v���P�[�V�����̃��[�v����
*/
void Environ::CoreSystem::__CoreSystem::OnIdle(wxIdleEvent &)
{

}

/*
	�Z�b�g�A�b�v�֐���o�^����֐�
*/
void Environ::CoreSystem::__CoreSystem::SettingWizardFunction(std::function<bool()> aFunction)
{
	sSetupFumction = aFunction;
}



