#pragma once

/**
	@file CoreSystem.hpp
	@date Create for 2017/03/03 23:26

	@author msty

	 * @brief �A�v���P�[�V�������Ǘ����Ă���N���X�B
	 �A�v���P�[�V�����P�ʂŏ�������ۂɎg�p�B
*/

#include <sal.h>
#include <wtypes.h>
namespace Environ {
	//�A�v���P�[�V�����S�̂̃V�X�e��
	/**
	 * @class CoreSystem
	 *
	@brief �A�v���P�[�V�����S�̂ɉe�����鏈���A�������̓A�v���P�[�V��������f�[�^���擾����ۂɎg�p�B
	���̃N���X�̓C���X�^���X���ł��Ȃ�
	*/
	class CoreSystem
	{
	public:
		/**< OS�ŗL�̃V�X�e�����` */
		class __CoreSystem;
	private:
		/**
			@brief �g�p���Ȃ�		
		*/
		CoreSystem();
		/**
		@brief �g�p���Ȃ�
		*/
		~CoreSystem();

	};

}