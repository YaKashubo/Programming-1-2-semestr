#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;

	for (int i = 0; i <= 1000; i++)
	{
		if ((i * i * (a * i + b) + c * i + d) == 0)
		{
			cout << i << endl;;
		}
	}
	return EXIT_SUCCESS;
}