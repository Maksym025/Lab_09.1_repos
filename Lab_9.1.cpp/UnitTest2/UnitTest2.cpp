#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.1.cpp/dod.h"
#include "../Lab_9.1.cpp/var.h"
#include "../Lab_9.1.cpp/sum.h"
#include "../Lab_9.1.cpp/Lab_9.1.cpp.cpp"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0;
			int exp = 0.9;
			Assert::AreEqual(exp, arccot(x),0.001);
		}
	};
}
