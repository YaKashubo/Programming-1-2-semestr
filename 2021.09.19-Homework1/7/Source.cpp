#include<iostream>
using namespace std;
int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	c = a;
	a = b;
	b = c;

	cout << endl<<"a = "<<a<<endl;
	cout << "b = "<<b<<endl;

	return EXIT_SUCCESS;
}