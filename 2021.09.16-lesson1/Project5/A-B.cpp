#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0;
	cout << "¬ведите числа дл€ вычитани€" << endl;
	cin >> a >> b;
	cout << a << " - " << b << " = " << a - b << endl;

	return 0;
}