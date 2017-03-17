#pragma once
#include "Object.hpp"
/**
	@file BetweenValue.hpp
	@date Create for 2017/03/14 17:10

	@author msty

	@brief ���2�̒l�̊Ԃ̐��l�������N���X
*/

namespace Environ {

	class Between :public Object {
	public:
		Between();
		Between(const Int aStart);
		Between(const Int aStart, const Int aEnd);
		Between(const Int aStart, const Int aEnd,const Int aStep);
		~Between();

		Int Diff()const;

	private:
		Int mStart;
		Int mEnd;
		Int mStep;
	};
}