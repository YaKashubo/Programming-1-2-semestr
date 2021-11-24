#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	cin >> k;
	int* a = new int[k] {0};

	for (int i = 0; i < k; i++)
	{
		cin >> n >> m;
		a[i] = 19 * m + (n + 239) * (n + 366) / 2;
	}

	for (int i = 0; i < k; i++)
	{
		cout << a[i] << endl;
	}

	delete[] a;
	return EXIT_SUCCESS;
}