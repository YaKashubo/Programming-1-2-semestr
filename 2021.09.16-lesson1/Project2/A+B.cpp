#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0;
	cout << "Введите числа для сложения" << endl;
	cin >> a >> b;
	cout << a << " + " << b << " = " << a + b << endl;

	return 0;
}