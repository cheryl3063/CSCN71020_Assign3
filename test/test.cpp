#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:
		
		TEST_METHOD(caseSensitivityTest)
		{
			// Test case with lowercase inputs
			Assert::AreEqual("Invalid", determineWinner("rock", "Scissors"));

		}
		TEST_METHOD(firstPlayerWinTest)
		{
			// Test case with player1 as a winner
			Assert::AreEqual("Player1", determineWinner("Rock", "Scissors"));

		}
	};
}
