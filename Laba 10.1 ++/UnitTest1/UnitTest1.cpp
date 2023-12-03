#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 10.1/Laba 10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string fileName = "1.txt"; 

			bool result = Find(fileName);

			Assert::IsTrue(result, L"Expected 'Find' function to return true");
		}
	};
}
