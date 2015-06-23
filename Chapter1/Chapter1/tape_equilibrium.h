#pragma once
#include <vector>

class tape_equilibrium
{
public:
	tape_equilibrium();
	~tape_equilibrium();

	int solution(std::vector<int> &A);

	int generate_random();
};

