#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double n = 0;
	cin >> n;

	long long intn = *((long long*)&n); // преобразование double в long long

	for (int i = 0; i < sizeof(long long) * 8; i++)
	{

		unsigned long long bit = 0; 

		bit = 1 << (sizeof(long long) * 8 - 1 - i); // создаём число 1000 0000 0000 ..., чтобы получить конкретный бит

		long long cbit = 0; // сам бит

		cbit = (intn & bit) >> (sizeof(long long) * 8 - 1 - i); //рассчёт бита и сдвиг его в начало
		cout << cbit;

		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}