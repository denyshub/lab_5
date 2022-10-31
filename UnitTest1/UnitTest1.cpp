#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_P0)
		{
			double test_0 = P0(1,1);
			Assert::AreEqual(test_0, 1.);
		}

		TEST_METHOD(Test_P1)
		{
			double test_1 = P1(1, 1,1);
			Assert::AreEqual(test_1, 1.);
		}

		TEST_METHOD(Test_P2)
		{
			double test_2 = P2(1, 1,1);
			Assert::AreEqual(test_2, 1.);
		}

		TEST_METHOD(Test_P3)
		{
			double test_3 = P3(1, 1, 1, 1);
			Assert::AreEqual(test_3, 1.);
		}

		TEST_METHOD(Test_P4)
		{
			double test_4 = P4(1, 1, 1, 1);
			Assert::AreEqual(test_4, 1.);
		}



	};

}
