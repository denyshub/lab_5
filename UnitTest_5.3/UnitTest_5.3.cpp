#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(first_option)
		{
			double t;
			t = h(0);
			Assert::AreEqual(t, 2.);
			
		}
		
	};
}
