#include"stdafx.h"



void f3() {
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

	TEST_CLASS(Char)
	{
	public:


		//コンストラクタテスト
		TEST_FUNC(Constructor)
		{
			Environ::Char c1;
			Environ::Char c2('A');
			Assert::AreEqual<char>(c1, '\0');
			Assert::AreEqual<char>(c2, 'A');
		}

		//演算子テスト
		TEST_FUNC(Operator)
		{
			Environ::Char c1('A');
			Environ::Char c2('B');
			Assert::AreEqual<bool>(c1 == 'A', true);
			Assert::AreEqual<bool>(c1 == 'B', false);
			Assert::AreEqual<bool>(c1 == c1, true);
			Assert::AreEqual<bool>(c1 == c2, false);
		}

		//一致系メソッドテスト
		TEST_FUNC(IsDigit)
		{
			Environ::Char c1('0');
			Environ::Char c2(' ');
			Environ::Char c3('\t');
			Environ::Char c4('a');
			Environ::Char c5('A');
			Environ::Char c6('\0');

			Assert::AreEqual<bool>(c1.IsDigit(), true);
			Assert::AreEqual<bool>(c2.IsDigit(), false);

			Assert::AreEqual<bool>(c2.IsSpace(), true);
			Assert::AreEqual<bool>(c3.IsSpace(), true);
			Assert::AreEqual<bool>(c4.IsSpace(), false);

			Assert::AreEqual<bool>(c3.IsAlpha(), false);
			Assert::AreEqual<bool>(c4.IsAlpha(), true);

			Assert::AreEqual<bool>(c4.IsUpper(), false);
			Assert::AreEqual<bool>(c5.IsUpper(), true);

			Assert::AreEqual<bool>(c4.IsLower(), true);
			Assert::AreEqual<bool>(c5.IsLower(), false);

			Assert::AreEqual<bool>(c5.IsNull(), false);
			Assert::AreEqual<bool>(c6.IsNull(), true);

		}

		//一致系メソッドテスト
		TEST_FUNC(IsSpace)
		{
			Environ::Char c1('0');
			Environ::Char c2(' ');
			Environ::Char c3('\t');
			Assert::AreEqual<bool>(c1.IsSpace(), false);
			Assert::AreEqual<bool>(c2.IsSpace(), true);
			Assert::AreEqual<bool>(c3.IsSpace(), true);
		}

		//一致系メソッドテスト
		TEST_FUNC(IsAlpha)
		{
			Environ::Char c1('A');
			Environ::Char c2(' ');
			Assert::AreEqual<bool>(c1.IsAlpha(), true);
			Assert::AreEqual<bool>(c2.IsAlpha(), false);
		}

		//一致系メソッドテスト
		TEST_FUNC(IsUpper)
		{
			Environ::Char c1('A');
			Environ::Char c2('a');
			Assert::AreEqual<bool>(c1.IsUpper(), true);
			Assert::AreEqual<bool>(c2.IsUpper(), false);
		}

		//一致系メソッドテスト
		TEST_FUNC(IsLower)
		{
			Environ::Char c1('a');
			Environ::Char c2('A');
			Assert::AreEqual<bool>(c1.IsLower(), true);
			Assert::AreEqual<bool>(c2.IsLower(), false);
		}

		//一致系メソッドテスト
		TEST_FUNC(IsNull)
		{
			Environ::Char c1('\0');
			Environ::Char c2(' ');
			Assert::AreEqual<bool>(c1.IsNull(), true);
			Assert::AreEqual<bool>(c2.IsNull(), false);
		}

		//一致系メソッドテスト
		TEST_FUNC(ToLower)
		{
			Environ::Char c1('a');
			Environ::Char c2('A');
			Assert::AreEqual<char>(c1.ToLower(), 'a');
			Assert::AreEqual<char>(c2.ToLower(), 'a');
		}

		//一致系メソッドテスト
		TEST_FUNC(ToUpper)
		{
			Environ::Char c1('a');
			Environ::Char c2('A');
			Assert::AreEqual<char>(c1.ToUpper(), 'A');
			Assert::AreEqual<char>(c2.ToUpper(), 'A');
		}



	};
}