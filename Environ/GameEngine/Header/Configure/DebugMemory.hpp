#pragma once
/**
	@file Memory.hpp
	@date Create for 2017/03/03 22:36

	@author msty

	@brief �f�o�b�O���Ƀ������̊Ď�������}�N�����`���Ă��܂�
*/

#ifdef _DEBUG
#include<crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif