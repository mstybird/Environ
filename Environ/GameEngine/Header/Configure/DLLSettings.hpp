#pragma once
#ifdef __ENVIRON_DLL_EXPORTS
#define DllEntry __declspec(dllexport)
#else
#define DllEntry __declspec(dllimport)
#endif