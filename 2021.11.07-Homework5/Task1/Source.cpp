#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int pos1 = 0;
	int pos2 = 0;
	int pos1bit = 0;
	int pos2bit = 0;
	cin >> n >> pos1 >> pos2;

	pos1bit = (n & (1 << pos1)) >> pos1;
	pos2bit = (n & (1 << pos2)) >> pos2;

	int newn = 0;
	newn = n & (~((1 << pos1) | (1 << pos2)));

	int ans = 0;
	ans = newn | ((pos2bit << pos1) | (pos1bit << pos2));

	cout << ans << endl;


	return EXIT_SUCCESS;
}