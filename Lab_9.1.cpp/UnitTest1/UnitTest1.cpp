#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.1.cpp/Lab_9.1.cpp.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;
			double exp = 2.1313;
			Assert::AreEqual(arccot(x), exp);

		}
	};
}
