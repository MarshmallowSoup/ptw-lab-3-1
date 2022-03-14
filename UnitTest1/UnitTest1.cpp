#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.1/lab3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Student s[2];
			s[0].math = 5;
			s[1].math = 4;
			Assert::AreEqual(1, mathFive(s, 2));
		}
		TEST_METHOD(TestMethod2)
		{
			Student s[2];
			s[0].physics = 3;
			s[1].physics = 3;
			Assert::AreEqual(0, physicsFive(s, 2));
		}
		TEST_METHOD(TestMethod3)
		{
			Student s[3];
			s[0].physics = 5;
			s[0].math = 3;
			s[1].physics = 3;
			s[1].math = 2;
			s[2].physics = 5;
			s[2].math = 5;
			Assert::AreEqual(2, fivePhAndMath(s, 3));
		}
	};
}
