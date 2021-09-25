#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	cin >> a;

	cout << (((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) ? "YES" : "NO") << endl;

	return EXIT_SUCCESS;
}