#pragma once

/**
@file PreCompiled.hpp

@author msty

@brief �v���R���p�C���p�̃w�b�_�t�@�C��
�v���b�g�t�H�[����g�p���Ă��郉�C�u�����ɉ����ăC���N���[�h�̐؂�ւ������Ă���
*/

//STL�̃C���N���[�h���܂Ƃ߂��w�b�_
#include<PreCompiled/C++.hpp>
//STL�̂����AC++11�Œǉ����ꂽ�t�@�C���̃C���N���[�h���܂Ƃ߂��w�b�_
#include<PreCompiled/C++11.hpp>

//wxWidgets���g���v���W�F�N�g�ł̓C���N���[�h
#ifdef USING_LIBRARY_WXWIDGETS
#include<wx/wx.h>
//�Ȃ�����DLL�������ꍇ�͐ÓI�����N����
#ifdef _USRDLL
#include<Configure/wxWidgetsLinkSetting.hpp>
#endif
#endif

//Window�̏ꍇ�ɃC���N���[�h
#ifdef _WINDOWS
#include<windows.h>
#endif 

