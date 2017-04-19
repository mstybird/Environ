#pragma once
/**
	@file __EntryPoint.hxx
	@date Create for 2017/03/03 22:39

	@author msty

	@brief 外部から見たエントリーポイントの定義ファイル
	DLL内でアプリケーションのエントリーポイントは定義できないため、
	セットアップ関数とその他引数を渡す関数を用意している
*/



#include<Configure/DLLSettings.hpp>

DllEntry int __Startup(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd,std::function<bool()> aFunction);