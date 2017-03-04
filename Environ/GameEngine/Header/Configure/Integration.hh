#pragma once

/**
@file PreCompiled.hpp

@author msty

@brief プリコンパイル用のヘッダファイル
プラットフォームや使用しているライブラリに応じてインクルードの切り替えをしている
*/

//STLのインクルードをまとめたヘッダ
#include<PreCompiled/C++.hpp>
//STLのうち、C++11で追加されたファイルのインクルードをまとめたヘッダ
#include<PreCompiled/C++11.hpp>

//wxWidgetsを使うプロジェクトではインクルード
#ifdef USING_LIBRARY_WXWIDGETS
#include<wx/wx.h>
//なおかつDLLだった場合は静的リンクする
#ifdef _USRDLL
#include<Configure/wxWidgetsLinkSetting.hpp>
#endif
#endif

//Windowの場合にインクルード
#ifdef _WINDOWS
#include<windows.h>
#endif 

