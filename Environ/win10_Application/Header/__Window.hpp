#pragma once

/**
	@file __Scene.hpp
	@date Create for 2017/03/03 23:18

	@author msty

	@brief �e�E�B���h�E�̒�`�����Ă���t�@�C��
*/

#include <System\Window.hpp>

namespace Environ {
	//
	/**
		@brief wxFrame���p������e�ƂȂ�E�B���h�E(�A�v���������̓o�O�C����d�l�ǉ����N�G�X�g������ꍇ�̂ݐG��)
		
		@param 
		@return 
	
	*/
	class Window::__Window :public wxFrame{
	public:
		/**
			@brief Window�̏�����
			���݂͕\���܂ōs���Ă��邪�A�؂蕪����\��
			
			@param aWindowTitle �E�B���h�E�^�C�g��
			@param aPositionX �E�B���h�E�ʒu
			@param aPositionY �E�B���h�E�ʒu
			@param aWidth �E�B���h�E�T�C�Y
			@param aHeight �E�B���h�E�T�C�Y

		*/
		__Window(const char * aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);

		/**
			@brief ���̃N���X�Œ�`�������̂�����A�����I�ɊJ���̕K�v������ꍇ�A
			������ɂ܂Ƃ߂�
		*/
		virtual ~__Window();

	private:
	};
	
}