#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 1;
	int j = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (j < k)
		{
			cout << setw(4) << i << " ";
			j++;
		}
		else
		{
			cout << endl << setw(4) << i << " ";
			k++;
			j = 1;
		}
	}
	return EXIT_SUCCESS;
}