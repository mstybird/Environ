#pragma once

/**
	@file Scene.hpp
	@date Create for 2017/03/03 23:32

	@author msty

	@brief �E�B���h�E���Ǘ�����N���X�̒�`�����Ă���t�@�C���B

*/

#include<Configure/DLLSettings.hpp>

namespace Environ {
	/**
	 * @class Scene
	 *
	 * @brief ���ʂ�\���V�[��(��{�I�Ɍp�����Ďg��)
		���ڃC���X�^���X�����邱�Ƃ͂ł����A�E�B���h�E�����ɂ�Create���\�b�h��p����B
	*/
	class Window
	{
	public:
		/**
			@brief �e�����ŃE�B���h�E�𐶐�����

			@param aWindowTitle	�E�B���h�E�^�C�g��
			@param aPositionX	�E�B���h�E�ʒuX
			@param aPositionY	�E�B���h�E�ʒuY
			@param aWidht	�N���C�A���g��
			@param aHeight	�N���C�A���g����
			@return �����ɐ�������΃E�B���h�EID���A��B���s�̏ꍇ�� 0

		*/
		DllEntry static int Create(const char* aWindowTitle, const int aPositionX, const int aPositionY, const int aWidth, const int aHeight);

		/**
			@brief �E�B���h�E�̃N���C�A���g�T�C�Y�����擾����
			
			@param ���݂���E�B���h�E��ID
			@return �N���C�A���g�T�C�Y���B�E�B���h�EID���s���ȏꍇ��0
		
		*/
		DllEntry static int GetClientWidth(const int aWindowId);

	private:
		Window() {}
		~Window() {}

		class __Window;

	};
}


