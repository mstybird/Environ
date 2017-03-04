#include<PreCompiled.hpp>

#include <__EntryPoint.hxx>
#include <System/EntryPoint.hpp>

#include <stdlib.h> 
#include <crtdbg.h>  
#include <wtypes.h>

#include<Configure/DebugMemory.hpp>
/**
	@brief Windows�����G���g���[�|�C���g
	
	@param hInstance �A�v���P�[�V�����C���X�^���X�n���h��
	@param hPrevInstance win16�����C���X�^���X�n���h��
	@param lpCmdLine
	@param nCmdShow
	@return �A�v���P�[�V���� ���^�[���R�[�h

*/
int __stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) {
	//���������[�N���m�p
	_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
	//�A�v���P�[�V�������I�������ۂ̃R�[�h��Ԃ�
	return __Startup(hInstance, hPrevInstance, lpCmdLine, nShowCmd, Environ::SetupWizard);
}