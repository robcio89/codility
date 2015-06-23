#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int solution(vector<int> &A) {

	auto sum = 0;
	auto actual = 0;
	auto prev = 0;

	for (const auto& x : A)
	{
		sum += x;
	}
	auto ans = sum;

	for (auto it = A.begin() + 1; it != A.end(); ++it)
	{
		prev += *(it - 1);

		actual = abs(prev - (sum - prev));

		if (actual <= ans)
			ans = actual;
	}

	return ans;
};

int main()
{
	cout << " Hello " << endl;

	return 0;
}