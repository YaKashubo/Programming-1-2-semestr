#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int M = 0;
	int k = 0;
	cin >> N >> M;
	int* n = new int[N] {0};
	int* m = new int[M] {0};
	int* a = new int[N + M]{0};

	for (int i = 0; i < N; i++)
	{
		cin >> n[i];
	}

	for (int i = 0; i < M; i++)
	{
		cin >> m[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{

			if (n[i] == m[j])
			{
				a[k] = n[i];
				k++;
				n[i] = -1;
				m[j] = -1;
				break;
			}
		}
	}
	if (k != 0)
	{

		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < k; j++)
			{
				if (a[i] < a[j])
				{
					int t = a[j];
					a[j] = a[i];
					a[i] = t;
				}
			}
		}

		for (int i = 0; i < k; i++)
		{
			if (a[i] != a[i + 1])
			{
				cout << a[i] << " ";
			}
		}
	}

	delete[] n;
	delete[] m;
	delete[] a;
	return EXIT_SUCCESS;
}