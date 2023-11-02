#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 15;
			int a = 0, b = 25;

			int arr[SIZE]{};
			FullArr(arr, SIZE, a, b);
			int sumArr = SumArr(arr, SIZE);
			
			Assert::AreEqual(sumArr, 82 );


		}
	};
}
