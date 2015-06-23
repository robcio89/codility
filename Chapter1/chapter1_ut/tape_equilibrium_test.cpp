#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chapter1/tape_equilibrium.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace chapter1_ut
{		
	TEST_CLASS(tape_equilibrium_test)
	{
	public:
		
		TEST_METHOD(tape_equilibrium_1)
		{
			//positive int

			std::vector<int> input1{3, 1, 2, 4, 3};

			tape_equilibrium t;

			Assert::AreEqual(1, t.solution(input1));
		}

		TEST_METHOD(tape_equilibrium_2)
		{
			//positive int

			std::vector<int> input1{ 3 };

			tape_equilibrium t;

			Assert::AreEqual(3, t.solution(input1));
		}

		TEST_METHOD(tape_equilibrium_3)
		{
			//positive int

			std::vector<int> input1{ 9, 16 };

			tape_equilibrium t;

			Assert::AreEqual(7, t.solution(input1));
		}

		TEST_METHOD(tape_equilibrium_4)
		{
			//positive int

			std::vector<int> input1{ -9, 16 };

			tape_equilibrium t;

			Assert::AreEqual(7, t.solution(input1));
		}

		TEST_METHOD(tape_equilibrium_5)
		{
			//positive int

			std::vector<int> input1{ -3, 5,  16 };

			tape_equilibrium t;

			Assert::AreEqual(14, t.solution(input1));
		}

		TEST_METHOD(tape_equilibrium_6)
		{
			//positive int

			std::vector<int> input1{ -1, -5, -2, -13, -8 };

			tape_equilibrium t;

			Assert::AreEqual(13, t.solution(input1));
		}

	};
}