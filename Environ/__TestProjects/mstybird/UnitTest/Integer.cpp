#include"stdafx.h"
void f2() {
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
	__COUNTER__;
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


#define JOIN(x, y) JOIN_AGAIN(x, y)
#define JOIN_AGAIN(x, y) x ## y ## _
#define TEST_FUNC(FuncName) TEST_METHOD(JOIN(Case,__COUNTER__)FuncName)

namespace Type
{

	TEST_CLASS(Integer)
	{
	public:


		//�R���X�g���N�^�e�X�g
		TEST_FUNC(Test)
		{
			Environ::Integer<> i;
			Assert::AreEqual<int>(i, 0);
		}

		//�R���X�g���N�^�e�X�g
		TEST_FUNC(Constructor2)
		{
			Environ::Integer<> i(10);
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution1)
		{
			Environ::Integer<> i;
			i = 10;
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution2)
		{
			Environ::Integer<> i;
			i = -10;
			Assert::AreEqual<int>(i, -10);
		}

		//����e�X�g
		TEST_FUNC(Substitution3)
		{
			Environ::Integer<> i;
			i = INT_MIN;
			Assert::AreEqual<int>(i, INT_MIN);
		}

		//����e�X�g
		TEST_FUNC(Substitution4)
		{
			Environ::Integer<> i;
			i = INT_MAX;
			Assert::AreEqual<int>(i, INT_MAX);
		}

		//����e�X�g
		TEST_FUNC(Substitution5)
		{
			Environ::Integer<> i;
			i = 10;
			Assert::AreEqual<int>(i, 10);
		}

		//����e�X�g
		TEST_FUNC(Substitution6)
		{
			Environ::Integer<> i;
			i = -10;
			Assert::AreEqual<int>(i, -10);
		}

		//����e�X�g
		TEST_FUNC(Substitution7)
		{
			Environ::Integer<short> i;
			i = SHRT_MIN;
			Assert::AreEqual<int>(i, SHRT_MIN);
		}

		//����e�X�g
		TEST_FUNC(Substitution8)
		{
			Environ::Integer<> i;
			i = SHRT_MAX;
			Assert::AreEqual<int>(i, SHRT_MAX);
		}

		//���Z����e�X�g
		TEST_FUNC(AddEqual1)
		{
			Environ::Integer<> i;
			i += 20;
			Assert::AreEqual<int>(i, 20);
		}

		//���Z����e�X�g
		TEST_FUNC(SubEqual1)
		{
			Environ::Integer<> i;
			i -= 20;
			Assert::AreEqual<int>(i, -20);
		}

		//��Z����e�X�g
		TEST_FUNC(ModEqual1)
		{
			Environ::Integer<> i(5);
			i *= 20;
			Assert::AreEqual<int>(i, 5 * 20);
		}

		//���Z����e�X�g
		TEST_FUNC(DivEqual1)
		{
			Environ::Integer<> i(500);
			i /= 20;
			Assert::AreEqual<int>(i, 500 / 20);
		}


		//���Z�e�X�g
		TEST_FUNC(Add1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(20);

			Assert::AreEqual<int>(i1 + i2, 300 + 20);
		}

		//���Z�e�X�g
		TEST_FUNC(Sub1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(20);

			Assert::AreEqual<int>(i1 - i2, 300 - 20);
		}

		//��Z�e�X�g
		TEST_FUNC(Mod1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(20);

			Assert::AreEqual<int>(i1*i2, 300 * 20);
		}

		//���Z�e�X�g
		TEST_FUNC(Div1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(20);

			Assert::AreEqual<int>(i1 / i2, 300 / 20);
		}


		//��r�e�X�g
		TEST_FUNC(Equal1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 == i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Equal2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 == i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(NotEqual1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 != i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(NotEqual2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 != i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 < i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 < i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Graeter3)
		{
			Environ::Integer<> i1(30);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 < i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 <= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 <= i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(GraeterThan3)
		{
			Environ::Integer<> i1(30);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 <= i2, true);
		}




		//��r�e�X�g
		TEST_FUNC(Less1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 > i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(Less2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 > i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(Less3)
		{
			Environ::Integer<> i1(30);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 > i2, false);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan1)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 >= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan2)
		{
			Environ::Integer<> i1(300);
			Environ::Integer<> i2(30);

			Assert::AreEqual(i1 >= i2, true);
		}

		//��r�e�X�g
		TEST_FUNC(LessThan3)
		{
			Environ::Integer<> i1(30);
			Environ::Integer<> i2(300);

			Assert::AreEqual(i1 >= i2, false);
		}


		//�_���ے�e�X�g
		TEST_FUNC(NOT1)
		{
			Environ::Integer<> i(30);
			Assert::AreEqual<int>(~i, ~30);
		}

		//��]�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(20);
			Assert::AreEqual<int>(i%i2, 30%20);
		}


		//��]�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(20);
			i %= i2;
			Assert::AreEqual<int>(i, 30 % 20);
		}

		//�V�t�g���Z�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(2);
			i >>= i2;
			Assert::AreEqual<int>(i, 30 >> 2);
		}

		//�V�t�g���Z�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(2);
			i <<= i2;
			Assert::AreEqual<int>(i, 30 << 2);
		}

		//�V�t�g���Z�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(2);

			Assert::AreEqual<int>(i>>i2, 30 >> 2);
		}

		//�V�t�g���Z�e�X�g
		TEST_FUNC(Reminder)
		{
			Environ::Integer<> i(30);
			Environ::Integer<> i2(2);

			Assert::AreEqual<int>(i<<i2, 30 << 2);
		}

	};
}