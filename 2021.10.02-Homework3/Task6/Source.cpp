#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int kpos = 0;
	int k0 = 0;
	int kneg = 0;

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		if (n > 0)
		{
			kpos++;
		}
		else if (n < 0)
		{
			kneg++;
		}
		else
		{
			k0++;
		}
	}

	cout << k0 << " " << kpos << " " << kneg << endl;
	return EXIT_SUCCESS;
}