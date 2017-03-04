#pragma once
#ifdef _DEBUG
#pragma comment(lib,"wxmsw31ud_core.lib")
#pragma comment(lib,"wxbase31ud.lib")
#pragma comment(lib,"wxtiffd.lib")
#pragma comment(lib,"wxjpegd.lib")
#pragma comment(lib,"wxpngd.lib")
#pragma comment(lib,"wxzlibd.lib")
#pragma comment(lib,"wxregexud.lib")
#pragma comment(lib,"wxexpatd.lib")
#else
#pragma comment(lib,"wxmsw31u_core.lib")
#pragma comment(lib,"wxbase31u.lib")
#pragma comment(lib,"wxtiff.lib")
#pragma comment(lib,"wxjpeg.lib")
#pragma comment(lib,"wxpng.lib")
#pragma comment(lib,"wxzlib.lib")
#pragma comment(lib,"wxregexu.lib")
#pragma comment(lib,"wxexpat.lib")
#endif // _DEBUG



//WindowCOM Libraries
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"comctl32.lib")
#pragma comment(lib,"rpcrt4.lib")
#pragma comment(lib,"wsock32.lib")
#pragma comment(lib,"odbc32.lib")