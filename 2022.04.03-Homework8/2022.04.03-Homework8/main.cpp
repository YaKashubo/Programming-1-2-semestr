#include<iostream>
#include"Complex.h"

using namespace std;

int main(int argv, char* argc[])
{
	Complex z1(0, 0), z2(0, 0), z3(0, 0);

	z1.setA(-2);
	z2.setB(2);
	z3.set(2, 2);

	z1.print();
	z2.print();
	z3.print();
	(-z3).print();
	(z3.con()).print();
	cout << z1.arg() << endl;
	cout << z3.mod() << endl;

	z2.set(2, -3);
	z3 = z3 * z2;
	z3.print();

	z1 = z3 / z2;
	z1.print();
	z1 = 1 / z2;
	z1.print();
	z1 = powc(z2, 4);
	z1.print();

	z2.set(2, 2);
	Complex* z2roots = rootc(z2, 3);
	for (int i = 0; i < 3; i++)
	{
		z2roots[i].print();
	}
	cout << z2 << endl;

	return EXIT_SUCCESS;
}