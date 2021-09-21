#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	cin >> a >> b;

	max = a + (b - a) * ((a % b) / a);
	cout << max << endl;

}