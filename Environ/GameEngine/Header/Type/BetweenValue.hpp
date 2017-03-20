#pragma once
#include "Object.hpp"
#include"Integer.hpp"
/**
	@file BetweenValue.hpp
	@date Create for 2017/03/14 17:10

	@author msty

	@brief ���2�̒l�̊Ԃ̐��l�������N���X
	�C�����C������
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
		Int GetStart()const;
		Int GetEnd()const;
		Int GetStep()const;

		Between& SetStart(const Int& aStart);
		Between& SetEnd(const Int& aEnd);
		Between& SetStep(const Int& aStep);
		Between& SetBetween(const Int& aStart,const Int& aEnd, const Int& aStep);

	private:
		Int mStart;
		Int mEnd;
		Int mStep;
	};
}

#include"BetweenValue.inl"