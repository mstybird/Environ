#pragma once
/**
	@file __CoreSystem.hxx
	@date Create for 2017/03/03 22:36

	@author msty

	@brief �A�v���P�[�V�����Ǘ��p�N���X�̒�`
*/

#include <System/CoreSystem.hpp>


namespace Environ {
	//�V���O���g������
	/**
		@class __CoreSystem
		@brief �A�v���P�[�V�������Ǘ�����N���X
	*/
	class CoreSystem::__CoreSystem :public wxApp{
	public:

		/**
			@brief �A�v���P�[�V�����S�̂̏���������

			@return ����ɏ������ł����ꍇ��true
		
		*/
		virtual bool OnInit() override;

		/**
			@brief �A�v���P�[�V�����S�̂ŏ������郋�[�v����
			
			@param event �Ă�wxApp�C���X�^���X�̃C�x���g
		
		*/
		void OnIdle(wxIdleEvent& event);

		/**
			@brief �Z�b�g�A�b�v���ɌĂԊ֐���ݒ肷��
			
			@param �Z�b�g�A�b�v�֐�
		
		*/
		static void SettingWizardFunction(std::function<bool()> aFunction);

	private:
		static std::function<bool()> sSetupFumction; /**< ���������Ɏ��s����Z�b�g�A�b�v�֐� */
	};
}