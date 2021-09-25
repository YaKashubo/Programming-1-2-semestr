#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	cout << "Max kotlets on frying pan at a time = ";
	cin >> k;

	cout << "Time of cooking in minutes of 1 kotlet = ";
	cin >> m;

	cout << "General number of kotlets = ";
	cin >> n;

	if (n % k == 0)
	{
		cout << "You need " << (n / k) * 2 * m << " minutes" << endl;
	}
	else
	{
		cout << "You need " << (n / k + 1) * 2 * m << " minutes" << endl;
	}

	return EXIT_SUCCESS;
}