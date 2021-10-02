#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int ch = 0;
	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ch;
		sum += ch;
	}

	cout << sum << endl;
	return EXIT_SUCCESS;
}