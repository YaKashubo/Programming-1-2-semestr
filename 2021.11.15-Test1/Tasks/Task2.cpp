#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int max = 0; 
	int min = 0;
	int i = 2;

	cin >> min >> max;
	while (cin >> a)
	{
		i++;
		if (i % 2)
		{
			if (a < min)
			{
				min = a;
			}
		}
		else if (a > max)
		{
			max = a;
		}
	}
	cout << max + min;
}