#pragma once
#include "Object.hpp"
#include"Integer.hpp"
/**
	@file BetweenValue.hpp
	@date Create for 2017/03/14 17:10

	@author msty

	@brief 主に2つの値の間の数値を扱うクラス
	インライン実装
*/

namespace Environ {


	class Between :public Object {
	public:
		Between();
		Between(const UInt aStart);
		Between(const UInt aStart, const UInt aEnd);
		Between(const UInt aStart, const UInt aEnd,const UInt aStep);
		~Between();

		UInt Diff()const;
		UInt GetStart()const;
		UInt GetEnd()const;
		UInt GetStep()const;

		Between& SetStart(const UInt& aStart);
		Between& SetEnd(const UInt& aEnd);
		Between& SetStep(const UInt& aStep);
		Between& SetBetween(const UInt& aStart,const UInt& aEnd, const UInt& aStep);

	private:
		UInt mStart;
		UInt mEnd;
		UInt mStep;
	};
}

#include"BetweenValue.inl"