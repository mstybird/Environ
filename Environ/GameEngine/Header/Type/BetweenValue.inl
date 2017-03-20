namespace Environ {

	//範囲数値初期化
	Between::Between():
		mStart(0),
		mEnd(0),
		mStep(0)
	{

	}

	//範囲数値初期化
	Between::Between(const Int aStart):
		mStart(aStart),
		mEnd(aStart),
		mStep(0)

	{

	}

	//範囲数値初期化
	Between::Between(const Int aStart, const Int aEnd) :
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
	Between::Between(const Int aStart, const Int aEnd, const Int aStep):
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
	Between::~Between()
	{

	}

	//差を求める
	Int Between::Diff() const
	{
		return mEnd - mStart;
	}

	//開始値を取得する
	Int Between::GetStart() const
	{
		return mStart;
	}

	//終了値を取得する
	Int Between::GetEnd() const
	{
		return mEnd;
	}

	//刻み値を取得する
	Int Between::GetStep() const
	{
		return mStep;
	}
	//開始値を設定する
	Between& Between::SetStart(const Int& aStart)
	{
		mStart = aStart;
		return *this;
	}

	//終了値を設定する
	Between& Between::SetEnd(const Int& aEnd)
	{
		mEnd = aEnd;
		return *this;
	}

	//刻み値を設定する
	Between& Between::SetStep(const Int& aStep)
	{
		mStep = aStep;
		return *this;
	}

	//全ての値を設定する
	Between& Between::SetBetween(const Int& aStart, const Int& aEnd, const Int& aStep)
	{
		mStart = aStart;
		mEnd = aEnd;
		mStep = aStep;
	}
}