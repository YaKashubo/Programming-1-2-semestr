#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;

	cin >> n >> m >> k;

	if (k > n * m)
	{
		cout << "NO";
	}
	else
	{
		if (n == 1)
		{
			cout << (k <= m ? "YES" : "NO");
		}
		else if (m == 1)
		{
			cout << (k <= n ? "YES" : "NO");
		}
		else
		{
			cout << (k % n == 0 || k % m == 0 ? "YES" : "NO");
		}
	}


	return EXIT_SUCCESS;
}