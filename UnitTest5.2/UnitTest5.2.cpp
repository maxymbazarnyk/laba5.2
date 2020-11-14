#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 2;
			const int n = 2;
			double a = 2;
			t = A(x, n, a);
			Assert::AreEqual(t, 0.3);
		}
	};
}
