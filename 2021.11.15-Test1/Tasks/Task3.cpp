#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int a1 = 0;
	int b1 = 0;
	int ans = 0;

	cin >> a >> b;
	a1 = a;
	b1 = b;
	while (a!=0 && b!=0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}

	ans = (a1 * b1) / (a + b);

	cout << ans << endl;
	return EXIT_SUCCESS;
}