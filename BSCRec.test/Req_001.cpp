#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTest
{
	TEST_CLASS(BCSRecTest)
	{
	public:

		/*TEST_METHOD(TestMethod1)
		{
		}*/

		TEST_METHOD(TestPerimeter)
		{
			// This is testing the getPerimeter function using 2 * 2 + 4 * 2, expecting a returned value of 12
			int result = 0;

			int x = 2;
			int y = 4;

			result = getPerimeter(&x, &y);
			Assert::AreEqual(12, result);
		}

		TEST_METHOD(TestArea)
		{
			// This is testing the getArea function using 4 * 4, expecting a returned value of 16
			int result = 0;

			int x = 4;

			result = getArea(&x, &x);
			Assert::AreEqual(16, result);
		}

		TEST_METHOD(TestsetLength_NegativeInput)
		{
			//This is testing the setlength() function for negative inputs, expecting an unchanged length value
			int input = -5;
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);
			

			setLength(input, length);
			Assert::AreEqual(1, *length);
			delete length;
		}

		TEST_METHOD(TestsetLength_NonIntegerInputsInBounds)
		{
			//This is testing the setlength() function for non integer inputs within bounds of 1-100, expecting length value to equal 97
			char input = 'a';
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);

			setLength(input, length);
			Assert::AreEqual(97, *length);
			delete length;
		}

		TEST_METHOD(TestsetLength_NonIntegerInputsOutOfBounds)
		{
			//This is testing the setlength() function for non integer inputs within bounds of 1-100, expecting length value to be unchanged
			char input = 'z';
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);

			setLength(input, length);
			Assert::AreEqual(1, *length);
			delete length;
		}

		TEST_METHOD(TestsetWidth_NegativeInput)
		{
			//This is testing the setlength() function for negative inputs, expecting an unchanged length value
			int input = -5;
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);


			setLength(input, length);
			Assert::AreEqual(1, *length);
			delete length;
		}

		TEST_METHOD(TestsetWidth_NonIntegerInputsInBounds)
		{
			//This is testing the setlength() function for non integer inputs within bounds of 1-100, expecting length value to equal 97
			char input = 'a';
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);

			setLength(input, length);
			Assert::AreEqual(97, *length);
			delete length;
		}

		TEST_METHOD(TestsetWidth_NonIntegerInputsOutOfBounds)
		{
			//This is testing the setlength() function for non integer inputs within bounds of 1-100, expecting length value to be unchanged
			char input = 'z';
			int* length = new int;

			*length = 1;

			Assert::AreEqual(1, *length);

			setLength(input, length);
			Assert::AreEqual(1, *length);
			delete length;
		}


	};
}
