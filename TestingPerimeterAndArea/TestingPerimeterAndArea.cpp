#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);

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
			result = getPerimeter(2, 4);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(TestArea)
		{
			// This is testing the getArea function using 4 * 4 = 16
			int result = 0;
			result = getArea(4, 4);
			Assert::AreEqual(16, result);
		}
	};
}
