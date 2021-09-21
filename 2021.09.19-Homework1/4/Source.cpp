#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv)
{
	setlocale(LC_ALL, "Russian");
	int v = 0;
	int t = 0;

	cout << "Speed = ";
	cin >> v;
	cout << "Time = ";
	cin >> t;

	cout << "Position = " << (109 + v * t % 109) % 109 << " km" << endl;

	return EXIT_SUCCESS;
}