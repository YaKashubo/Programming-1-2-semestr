#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cout << "You have equation ( ax + b ) : ( cx + d ) = 0" << endl << "Write down parametrs" << endl;
	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	cout << "d = ";
	cin >> d;

	if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	else if ((a == 0 && b != 0) || ((-b / a) == (-d / c)) || (b % a != 0))
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "Answer is x = " << -b / a << endl;
	}

	return EXIT_SUCCESS;
}