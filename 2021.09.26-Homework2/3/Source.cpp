#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;
	int res = 0;

	cin >> k >> m >> n;

	if (n <= k)
	{
		res = 2 * m;
	}
	else if ((2 * n) % k == 0)
	{
		res = ((2 * m * n) / k);
	}
	else
	{
		res = (((2 * n) / k + 1) * m);
	}
	cout << res;

	return EXIT_SUCCESS;
}


