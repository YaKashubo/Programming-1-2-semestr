#include<iostream>


using namespace std;

int main(int argc, char* argv[])
{
	int min = 10001;
	int max = -10001;
	int k = 0;
	int n = 1;
	char s = 0;
	int* a = new int[n];
	

	do 
	{
		if (k > n)
		{
			int* newarr = new int[n * 2]{ 0 };
			for (int i = 0; i < n; i++)
			{
				newarr[i] = a[i];
			}
			delete[] a;
			a = newarr;
			n *= 2;
		}
		if()
	} while (s != "\n");

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		else
		{
			if (a[i] < min)
			{
				min = str[i];
			}
		}
	}
	
	cout << max + min << endl;
	return EXIT_SUCCESS;
}