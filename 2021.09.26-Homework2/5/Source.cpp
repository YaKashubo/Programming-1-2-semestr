#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;

	cin >> k;

	cout << (k % 4 == 0 ? "YES" : "N0") << endl;
	return EXIT_SUCCESS;
}