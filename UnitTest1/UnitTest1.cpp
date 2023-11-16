#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMaxWordLength)
        {

            string str1 = "This is a sample string.";
            Assert::AreEqual<size_t>(6, MaxWordLength(str1));

            string str2 = "The quick brown fox jumps over the lazy dog.";
            Assert::AreEqual<size_t>(5, MaxWordLength(str2));

            string str3 = "12345";
            Assert::AreEqual<size_t>(5, MaxWordLength(str3));
        }

    };
}
