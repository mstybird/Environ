namespace Environ {

	//�͈͐��l������
	Between::Between():
		mStart(0),
		mEnd(0),
		mStep(0)
	{

	}

	//�͈͐��l������
	Between::Between(const Int aStart):
		mStart(aStart),
		mEnd(aStart),
		mStep(0)

	{

	}

	//�͈͐��l������
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

	//�͈͐��l������
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

	//�͈͐��l�J������(���ɂȂ�)
	Between::~Between()
	{

	}

	//�������߂�
	Int Between::Diff() const
	{
		return mEnd - mStart;
	}

	//�J�n�l���擾����
	Int Between::GetStart() const
	{
		return mStart;
	}

	//�I���l���擾����
	Int Between::GetEnd() const
	{
		return mEnd;
	}

	//���ݒl���擾����
	Int Between::GetStep() const
	{
		return mStep;
	}
	//�J�n�l��ݒ肷��
	Between& Between::SetStart(const Int& aStart)
	{
		mStart = aStart;
		return *this;
	}

	//�I���l��ݒ肷��
	Between& Between::SetEnd(const Int& aEnd)
	{
		mEnd = aEnd;
		return *this;
	}

	//���ݒl��ݒ肷��
	Between& Between::SetStep(const Int& aStep)
	{
		mStep = aStep;
		return *this;
	}

	//�S�Ă̒l��ݒ肷��
	Between& Between::SetBetween(const Int& aStart, const Int& aEnd, const Int& aStep)
	{
		mStart = aStart;
		mEnd = aEnd;
		mStep = aStep;
	}
}