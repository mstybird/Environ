#pragma once

/**
	@file DLLSettings.hpp
	@date Create for 2017/03/03 23:24

	@author msty

	@brief Environ‚Å—p‚¢‚é‹¤’Ê‚ÌDLLİ’èƒ}ƒNƒ
*/

#ifdef __ENVIRON_DLL_EXPORTS
#define DllEntry __declspec(dllexport)
#else
#define DllEntry __declspec(dllimport)
#endif