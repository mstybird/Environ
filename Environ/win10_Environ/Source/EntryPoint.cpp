#include<PreCompiled.hpp>

#include <__EntryPoint.hxx>
#include <System/EntryPoint.hpp>

#include <stdlib.h> 
#include <crtdbg.h>  
#include <wtypes.h>

#include<Configure/DebugMemory.hpp>
/**
	@brief Windows向けエントリーポイント
	
	@param hInstance アプリケーションインスタンスハンドル
	@param hPrevInstance win16向けインスタンスハンドル
	@param lpCmdLine
	@param nCmdShow
	@return アプリケーション リターンコード

*/
int __stdcall WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) {
	//メモリリーク検知用
	_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
	//アプリケーションが終了した際のコードを返す
	return __Startup(hInstance, hPrevInstance, lpCmdLine, nShowCmd, Environ::SetupWizard);
}