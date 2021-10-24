#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	for (int i = 0; i * i <= b; i++)
	{
		if (i * i >= a && i * i <= b)
		{
			cout << i * i << endl;
		}
	}
	return EXIT_SUCCESS;
}