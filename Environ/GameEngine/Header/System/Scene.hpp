#pragma once
#include<memory>
#include<Configure/DLLSettings.hpp>

namespace Environ {
	/**
	 * @class Scene
	 *
	 * @brief ���ʂ�\���V�[��(��{�I�Ɍp�����Ďg��)
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


		static int GetClientWidth(const int aWindowId);

	private:
		Window() {}
		~Window() {}
	
		class __Window;
	
	};
}


