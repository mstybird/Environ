#pragma once
namespace Environ {

	//�͈͐��l������
	inline Between::Between():
		mStart(0),
		mEnd(0),
		mStep(0)
	{

	}

	//�͈͐��l������
	inline Between::Between(const UInt aStart):
		mStart(aStart),
		mEnd(aStart),
		mStep(0)

	{

	}

	//�͈͐��l������
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

	//�͈͐��l������
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

	//�͈͐��l�J������(���ɂȂ�)
	inline Between::~Between()
	{

	}

	//�������߂�
	inline UInt Between::Diff() const
	{
		return mEnd - mStart;
	}

	//�J�n�l���擾����
	inline UInt Between::GetStart() const
	{
		return mStart;
	}

	//�I���l���擾����
	inline UInt Between::GetEnd() const
	{
		return mEnd;
	}

	//���ݒl���擾����
	inline UInt Between::GetStep() const
	{
		return mStep;
	}
	//�J�n�l��ݒ肷��
	inline Between& Between::SetStart(const UInt& aStart)
	{
		mStart = aStart;
		return *this;
	}

	//�I���l��ݒ肷��
	inline Between& Between::SetEnd(const UInt& aEnd)
	{
		mEnd = aEnd;
		return *this;
	}

	//���ݒl��ݒ肷��
	inline Between& Between::SetStep(const UInt& aStep)
	{
		mStep = aStep;
		return *this;
	}

	//�S�Ă̒l��ݒ肷��
	inline Between& Between::SetBetween(const UInt& aStart, const UInt& aEnd, const UInt& aStep)
	{
		mStart = aStart;
		mEnd = aEnd;
		mStep = aStep;
		return *this;
	}
}