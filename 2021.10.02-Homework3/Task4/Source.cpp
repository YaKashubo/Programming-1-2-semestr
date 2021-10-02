#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int nfac = 1;
	int kfac = 1;
	int nkfac = 1;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		nfac *= i;

		if (i <= k)
		{
			kfac *= i;
		}

		if (i <= n - k)
		{
			nkfac *= i;
		}
	}

	cout << nfac / (kfac * nkfac) << endl;

	return EXIT_SUCCESS;
}