#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int test_Q = Q(1, 15, 1, depth);
			Assert::AreEqual(test_Q, 1);
		}

		TEST_METHOD(TestMethod2)
		{
			int depth = 0;
			int test_Q1 = Q(3, 2, 1, depth);
			Assert::AreEqual(test_Q1, 2);
		}
	};
}
