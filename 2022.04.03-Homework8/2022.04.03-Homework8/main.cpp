#include<iostream>
#include"Complex.h"

using namespace std;

int main(int argv, char* argc[])
{
	Complex z1(3, 1);
	Complex z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.mod() << endl; //������ �����
	cout << z2.arg() << endl; //�������� �����
	cout << z1.reverse() << endl; //�������� �����
	z1.sqrtc(5, cout); //����� � ����� cout ������� ������ ����� �������

	return EXIT_SUCCESS;
}