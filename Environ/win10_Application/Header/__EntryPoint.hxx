#pragma once
/**
	@file __EntryPoint.hxx
	@date Create for 2017/03/03 22:39

	@author msty

	@brief �O�����猩���G���g���[�|�C���g�̒�`�t�@�C��
	DLL���ŃA�v���P�[�V�����̃G���g���[�|�C���g�͒�`�ł��Ȃ����߁A
	�Z�b�g�A�b�v�֐��Ƃ��̑�������n���֐���p�ӂ��Ă���
*/



#include<Configure/DLLSettings.hpp>

DllEntry int __Startup(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd,std::function<bool()> aFunction);