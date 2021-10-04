#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double cosa = 0;
	double cosb = 0;
	double cosw = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	cosa = (a * a + b * b - c * c) / (2.0 * a * b);
	cosb = (c * c + b * b - a * a) / (2.0 * c * b);
	cosw = (a * a + c * c - b * b) / (2.0 * a * c);

	if (cosa >= 1 || cosb >= 1 || cosw >= 1 || cosa <= -1 || cosb <= -1 || cosw <= -1)
	{
		cout << "impossible" << endl;
	}
	else if (cosa == 0 || cosb == 0 || cosw == 0)
	{
		cout << "right" << endl;
	}
	else if (cosa < 0 || cosb < 0 || cosw < 0)
	{
		cout << "obtuse" << endl;
	}
	else
	{
		cout << "acute" << endl;
	}

	return EXIT_SUCCESS;
}