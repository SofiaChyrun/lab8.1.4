#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofia8.1.4/ChyrunSofia8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char str[10] = ".abd.hkv.";
			t = Count(str);
			Assert::AreEqual(t, 3);
		}
	};
}
