#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingPerimeterAndArea
{
	TEST_CLASS(TestingPerimeterAndArea)
	{
	public:

		/*TEST_METHOD(TestMethod1)
		{
		}*/

		TEST_METHOD(TestPerimeter)
		{
			//This is testing the getPerimeter function using 2 * 2 + 4 * 2 = 12
			int result = 0;

			int x = 2;
			int y = 4;

			result = getPerimeter(&x, &y);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(TestArea)
		{
			// This is testing the getArea function using 4 * 4 = 16
			int result = 0;

			int x = 4;

			result = getArea(&x, &x);
			Assert::AreEqual(16, result);
		}
	};
}
