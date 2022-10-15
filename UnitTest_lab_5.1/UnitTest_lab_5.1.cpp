#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1_git/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			double test1;
			test1 = h(1, 2);
			Assert::AreEqual(test1, 0.4);

		}

	};
}
