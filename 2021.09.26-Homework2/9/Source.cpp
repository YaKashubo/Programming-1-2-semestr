#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int M = 0;
	int N = 0;
	int ansx = 0;
	int ansy = 0;

	cin >> M >> N >> x >> y;

	ansx = x + 1;
	ansy = y;
	if ((ansy > 0 && ansx > 0) && (ansx <= M && ansy <= N))
	{
		cout << ansx << " " << ansy << endl;
	}

	ansx = x - 1;
	ansy = y;
	if ((ansy > 0 && ansx > 0) && (ansx <= M && ansy <= N))
	{
		cout << ansx << " " << ansy << endl;

	}

	ansx = x;
	ansy = y + 1;
	if ((ansy > 0 && ansx > 0) && (ansx <= M && ansy <= N))
	{
		cout << ansx << " " << ansy << endl;
	}

	ansx = x;
	ansy = y - 1;
	if ((ansy > 0 && ansx > 0) && (ansx <= M && ansy <= N))
	{
		cout << ansx << " " << ansy << endl;
	}

	return EXIT_SUCCESS;
}