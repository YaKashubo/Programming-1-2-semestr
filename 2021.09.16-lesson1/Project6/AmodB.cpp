#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0;
	cout << "Введите число делимое и делитель" << endl;
	cin >> a >> b;
	cout << a << " остаток от деления на " << b << " = " << a % b << endl;

	return 0;
}