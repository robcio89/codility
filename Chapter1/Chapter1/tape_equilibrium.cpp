#include "tape_equilibrium.h"


tape_equilibrium::tape_equilibrium()
{
}


tape_equilibrium::~tape_equilibrium()
{
}

int tape_equilibrium::solution(std::vector<int> &A) {

	auto sum = 0;
	auto actual = 0;
	auto prev = 0;

	for (const auto& x : A)
	{
		sum += x;
	}
	auto ans = abs(sum);

	for (auto it = A.begin() + 1; it != A.end(); ++it)
	{
		prev += *(it - 1);

		actual = abs(prev - (sum - prev));

		if (actual <= ans)
			ans = actual;
	}

	return ans;
}

int tape_equilibrium::generate_random()
{

}
