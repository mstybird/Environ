#pragma once
#include <sal.h>
#include <wtypes.h>
#include <functional>
#include<Configure/DLLSettings.hpp>
DllEntry void __Startup(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd,std::function<bool()> aFunction);