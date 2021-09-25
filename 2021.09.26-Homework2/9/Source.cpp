#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int M = 0;
	int N = 0;

	cout << "Size of table?" << endl;
	cin >> M >> N;

	cout << "Coordinates of dot" << endl;
	cin >> x >> y;

	if (x == 1)
	{
		if (y == 1)
		{
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}
		else if (y == N)
		{
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
		}
		else
		{
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}
	}
	else if (x == M)
	{
		if (y == 1)
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}
		else if (y == N)
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
		}
		else
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}
	}
	else
	{
		if (y == 1)
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}
		else if (y == N)
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
		}
		else
		{
			cout << "(" << x - 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y - 1 << ")" << endl;
			cout << "(" << x + 1 << "," << y << ")" << endl;
			cout << "(" << x << "," << y + 1 << ")" << endl;
		}

	}
	return EXIT_SUCCESS;
}