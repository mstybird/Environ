#pragma once
#include "System\Window.hpp"
/**
	@file LayerGUI.hpp
	@date Create for 2017/03/04 18:04

	@author msty

	@brief GUI���C���[�N���X�t�@�C��
*/

namespace Environ
{
	/**
		@class LayerGUI
		@brief GUI���C���[�BGUI�p�[�c�֌W�͂�������g��
	*/
	class LayerGUI
	{
	public:

		/**
			@file LayerGUI.hpp
			@date Create for 2017/03/04 18:24
		
			@author msty
		
			@brief GUI���C���[���쐬����B
		*/
		static int Create(Window*& aParent);
	protected:
	private:
		LayerGUI();
		~LayerGUI();
		class __LayerGUI;
		__LayerGUI* $;
	};
}