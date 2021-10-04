#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int xq = 0; //x of queen
	int yq = 0;
	int xf = 0; // x of figure
	int yf = 0;
	int dx = 0; // difference 
	int dy = 0;

	//cout << "Write coordinates of queen" << endl << "x = ";
	cin >> xq;
	//cout << "y = ";
	cin >> yq;

	//cout << "Write coordinates of figure" << endl << "x = ";
	cin >> xf;
	//cout << "y = ";
	cin >> yf;

	dx = xf > xq ? xf - xq : xq - xf;
	dy = yf > yq ? yf - yq : yq - yf;


	if (((xq == xf) || (yq == yf)) || (dx == dy))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}
