#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	unsigned long long fac = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		fac = fac * i;
	}

	cout << fac << endl;
	return EXIT_SUCCESS;
}