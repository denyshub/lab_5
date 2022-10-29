#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(test_a)
		{
			double test_a = A(1, 1, 1);
			Assert::AreEqual(test_a, 1./3);
		}

		TEST_METHOD(test_sum)
		{
			int test_n = 1;
			double test_sum = sum(1, 1, test_n, 0);
			Assert::AreEqual(test_sum, 1+1./3);
		}


	};
}
