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

//Environ拡張型
#include"Type/Object.hpp"
#include"Type/Boolean.hpp"
#include"Type/BetweenValue.hpp"
#include"Type/Char.hpp"
#include"Type/String.hpp"
#include"Type/Numeric.hpp"
#include"Type/Floating.hpp"
#include"Type/Integer.hpp"

#include"Type/Object.inl"
#include"Type/Boolean.inl"
#include"Type/BetweenValue.inl"
#include"Type/Char.inl"
#include"Type/String.inl"
#include"Type/Numeric.inl"
#include"Type/Floating.inl"
#include"Type/Integer.inl"
