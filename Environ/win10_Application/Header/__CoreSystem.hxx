#pragma once
#include <System/CoreSystem.hpp>
#include<wx/wx.h>
namespace Environ {
	//�V���O���g������
	class CoreSystem::__CoreSystem :public wxApp{
	public:
		virtual bool OnInit() override;

		/**
			@brief �A�v���P�[�V�����S�̂ŏ������郋�[�v����
			
			@param event �Ă�wxApp�C���X�^���X�̃C�x���g
			@return �Ȃ�
		
		*/
		void OnIdle(wxIdleEvent& event);

		static void AddSetupFunction(std::function<bool()> aFunction);

	private:
		static std::function<bool()> sSetupFumction;
	};
}