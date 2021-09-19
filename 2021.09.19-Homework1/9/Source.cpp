#include<iostream>
using namespace std;
int main(int arcg, char* argv)
{
	int zn = 0, x = 0, x2 = 0;
	cout << "x = ";
	cin >> x;

	x2 = x * x;
	zn = x2 * (x2 + x + 1) + x + 1;

	cout << "x^4+x^3+x^2+x+1 = " << zn << endl;

	return EXIT_SUCCESS;
}