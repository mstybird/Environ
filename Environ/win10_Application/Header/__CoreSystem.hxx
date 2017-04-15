#pragma once
/**
	@file __CoreSystem.hxx
	@date Create for 2017/03/03 22:36

	@author msty

	@brief アプリケーション管理用クラスの定義
*/

#include <System/CoreSystem.hpp>


namespace Environ {
	//シングルトン実装
	/**
		@class __CoreSystem
		@brief アプリケーションを管理するクラス
	*/
	class CoreSystem::__CoreSystem :public wxApp{
	public:

		/**
			@brief アプリケーション全体の初期化処理

			@return 正常に初期化できた場合はtrue
		
		*/
		virtual bool OnInit() override;

		/**
			@brief アプリケーション全体で処理するループ処理
			
			@param event 呼んだwxAppインスタンスのイベント
		
		*/
		void OnIdle(wxIdleEvent& event);

		/**
			@brief セットアップ時に呼ぶ関数を設定する
			
			@param セットアップ関数
		
		*/
		static void SettingWizardFunction(std::function<bool()> aFunction);

	private:
		static std::function<bool()> sSetupFumction; /**< 初期化時に実行するセットアップ関数 */
	};
}