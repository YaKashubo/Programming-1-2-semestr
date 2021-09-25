#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;

	cout << "Size of chocolate?" << endl;
	cin >> n;
	cout << "x" << endl;
	cin >> m;

	cout << endl << "How much parts?" << endl;
	cin >> k;

	cout << endl << (k % n == 0 || k % m == 0 ? "YES" : "NO") << endl;
	return EXIT_SUCCESS;
}