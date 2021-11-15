#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int max = -1001;
	int min = 1001;
	int n = 0;
	cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	delete[] a;
	return EXIT_SUCCESS;
}