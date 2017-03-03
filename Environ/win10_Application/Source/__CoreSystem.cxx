#include "__CoreSystem.hxx"
#include <sal.h>
#include <wtypes.h>

std::function<bool()> Environ::CoreSystem::__CoreSystem::sSetupFumction; /* セットアップ関数の実体化 */

/*
	イベントの登録など
*/
bool Environ::CoreSystem::__CoreSystem::OnInit()
{
	//フレーム単位で処理するイベントの登録
	Bind(wxEVT_IDLE, &__CoreSystem::OnIdle, this);
	//アプリケーション側で実装したセットアップ関数の結果を返す
	return sSetupFumction();
	
}

/*
	アプリケーションのループ処理
*/
void Environ::CoreSystem::__CoreSystem::OnIdle(wxIdleEvent &)
{

}

/*
	セットアップ関数を登録する関数
*/
void Environ::CoreSystem::__CoreSystem::SettingWizardFunction(std::function<bool()> aFunction)
{
	sSetupFumction = aFunction;
}



