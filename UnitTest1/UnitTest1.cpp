#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2/Lab_06_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int a[] = { 2, 4, 5, 6, 10 };

			double result = AverageEvenIndexedElements(a, n);
			double average = 6.0; 

			Assert::AreEqual(result, average, 0.0001);
		}
	};
}
