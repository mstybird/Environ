#pragma once
namespace Environ {

	//範囲数値初期化
	inline Between::Between():
		mStart(0),
		mEnd(0),
		mStep(0)
	{

	}

	//範囲数値初期化
	inline Between::Between(const UInt aStart):
		mStart(aStart),
		mEnd(aStart),
		mStep(0)

	{

	}

	//範囲数値初期化
	inline Between::Between(const UInt aStart, const UInt aEnd) :
		mStart(aStart),
		mEnd(0),
		mStep(0)

	{
		if (aEnd >= aStart) {
			mEnd = aEnd;
		}
		else {
			mEnd = aStart;
		}
	}

	//範囲数値初期化
	inline Between::Between(const UInt aStart, const UInt aEnd, const UInt aStep):
		mStart(aStart),
		mEnd(0),
		mStep(aStep)

	{
		if (aEnd >= aStart) {
			mEnd = aEnd;
		}
		else {
			mEnd = aStart;
		}
	}

	//範囲数値開放処理(特になし)
	inline Between::~Between()
	{

	}

	//差を求める
	inline UInt Between::Diff() const
	{
		return mEnd - mStart;
	}

	//開始値を取得する
	inline UInt Between::GetStart() const
	{
		return mStart;
	}

	//終了値を取得する
	inline UInt Between::GetEnd() const
	{
		return mEnd;
	}

	//刻み値を取得する
	inline UInt Between::GetStep() const
	{
		return mStep;
	}
	//開始値を設定する
	inline Between& Between::SetStart(const UInt& aStart)
	{
		mStart = aStart;
		return *this;
	}

	//終了値を設定する
	inline Between& Between::SetEnd(const UInt& aEnd)
	{
		mEnd = aEnd;
		return *this;
	}

	//刻み値を設定する
	inline Between& Between::SetStep(const UInt& aStep)
	{
		mStep = aStep;
		return *this;
	}

	//全ての値を設定する
	inline Between& Between::SetBetween(const UInt& aStart, const UInt& aEnd, const UInt& aStep)
	{
		mStart = aStart;
		mEnd = aEnd;
		mStep = aStep;
		return *this;
	}
}