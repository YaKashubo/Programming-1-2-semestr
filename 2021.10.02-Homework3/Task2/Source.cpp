#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int ans = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		ans *= 2;
	}

	cout << ans << endl;
	return EXIT_SUCCESS;
}
