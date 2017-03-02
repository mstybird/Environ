#pragma once
#include <System/CoreSystem.hpp>
#include<wx/wx.h>
namespace Environ {
	//シングルトン実装
	class CoreSystem::__CoreSystem :public wxApp{
	public:
		virtual bool OnInit() override;

		/**
			@brief アプリケーション全体で処理するループ処理
			
			@param event 呼んだwxAppインスタンスのイベント
			@return なし
		
		*/
		void OnIdle(wxIdleEvent& event);

		static void AddSetupFunction(std::function<bool()> aFunction);

	private:
		static std::function<bool()> sSetupFumction;
	};
}