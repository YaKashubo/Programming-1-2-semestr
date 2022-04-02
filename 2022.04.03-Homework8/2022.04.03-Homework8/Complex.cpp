#include "Complex.h"

Complex::Complex(double a, double b) :a(a), b(b) {}

Complex::Complex(const Complex& complex) : a(complex.a), b(complex.b) {}

Complex::~Complex()
{
	this->a = 0;
	this->b = 0;
}

double Complex::getA()
{
	return this->a;
}

void Complex::setA(double a)
{
	this->a = a;
}

double Complex::getB()
{
	return this->b;
}

void Complex::setB(double b)
{
	this->b = b;
}

void Complex::set(double a, double b)
{
	this->a = a;
	this->b = b;
}

void Complex::print()
{
	if (this->a == 0)
	{
		std::cout << this->b << "i" << std::endl;
	}
	else
	{
		if (this->b > 0)
		{
			if (this->b == 1)
			{
				std::cout << this->a << "+i" << std::endl;
			}
			else
			{
				std::cout << this->a << "+" << this->b << "i" << std::endl;
			}
		}
		else if (this->b < 0)
		{
			if (this->b == -1)
			{
				std::cout << this->a << "-i" << std::endl;
			}
			else
			{
				std::cout << this->a << this->b << "i" << std::endl;
			}
		}
		else
		{
			std::cout << this->a << std::endl;
		}
	}

}

Complex& Complex::operator=(const Complex& complex)
{
	this->a = complex.a;
	this->b = complex.b;
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-this->a, -this->b);
}

Complex& Complex::operator+=(const Complex& complex)
{
	this->a += complex.a;
	this->b += complex.b;
	return *this;
}

Complex& Complex::operator+=(const double summ)
{
	this->a += summ;
	return *this;
}

Complex& Complex::operator-=(const Complex& complex)
{
	this->a -= complex.a;
	this->b -= complex.b;
	return *this;
}

Complex& Complex::operator-=(const double summ)
{
	this->a -= summ;
	return *this;
}

Complex& Complex::operator*=(const Complex& complex)
{
	double t = this->a;
	this->a = this->a * complex.a - this->b * complex.b;
	this->b = t * complex.b + this->b * complex.a;
	return *this;
}

Complex& Complex::operator*=(const double mult)
{
	this->a *= mult;
	this->b *= mult;
	return *this;
}

Complex& Complex::operator/=(const double mult)
{
	this->a /= mult;
	this->b /= mult;
	return *this;
}

Complex Complex::con()
{
	return Complex(this->a, -this->b);
}

double Complex::arg()
{
	if (this->a == 0)
	{
		if (this->b > 0)
		{
			return pi / 2;
		}
		else if (this->b < 0)
		{
			return -pi / 2;
		}
	}
	else
	{
		if (this->a > 0)
		{
			return atan(this->b / this->a);
		}
		else
		{
			if (this->b != 0)
			{
				return(this->b > 0 ? pi + atan(this->b / this->a) : -pi + atan(this->b / this->a));
			}
			else
			{
				return 0;
			}
		}
	}
}

double Complex::mod()
{
	return sqrt(this->a * this->a + this->b * this->b);
}

Complex operator+(const Complex& complex1, const Complex& complex2)
{
	return Complex(complex1.a + complex2.a, complex1.b + complex2.b);
}

Complex operator+(const Complex& complex1, const double summ)
{
	return Complex(complex1.a + summ, complex1.b);
}

Complex operator+(const double summ, const Complex& complex1)
{
	return Complex(complex1.a + summ, complex1.b);
}

Complex operator-(const Complex& complex1, const Complex& complex2)
{
	return Complex(complex1.a - complex2.a, complex1.b - complex2.b);
}

Complex operator-(const Complex& complex1, const double summ)
{
	return Complex(complex1.a - summ, complex1.b);
}

Complex operator-(const double summ, const Complex& complex1)
{
	return Complex(complex1.a - summ, complex1.b);
}

Complex operator*(const double mult, const Complex& complex)
{
	return Complex(complex.a * mult, complex.b * mult);
}

Complex operator*(const Complex& complex, const double mult)
{
	return Complex(complex.a * mult, complex.b * mult);
}

Complex operator*(const Complex& complex1, const Complex& complex2)
{
	return Complex(complex1.a * complex2.a - complex1.b * complex2.b, complex1.a * complex2.b + complex1.b * complex2.a);
}

Complex operator/(const double mult, Complex& complex)
{
	return (mult * complex.con()) / (complex.mod() * complex.mod());
}

Complex operator/(const Complex& complex, const double mult)
{
	return Complex(complex.a / mult, complex.b / mult);
}

Complex operator/(const Complex& complex1, Complex& complex2)
{
	return (complex1 * complex2.con()) / (complex2.mod() * complex2.mod());
}

Complex powc(Complex& complex, const int n)
{
	return pow(complex.mod(), n) * Complex(cos(complex.arg() * n), sin(complex.arg() * n));
}

Complex* rootc(Complex& complex, const double n)
{
	double newmod = 0;
	newmod = pow(complex.mod(), 1 / n);
	Complex* roots = new Complex[n];
	for (int i = 0; i < n; i++)
	{
		roots[i] = newmod * Complex(cos((complex.arg() + 2 * pi * (i + 1)) / n), sin(((complex.arg() + 2 * pi * (i + 1))) / n));
	}
	return roots;
}

std::ostream& operator<<(std::ostream& stream, const Complex& complex)
{
	if (complex.a == 0)
	{
		stream << complex.b << "i";
	}
	else
	{
		if (complex.b > 0)
		{
			if (complex.b == 1)
			{
				stream << complex.a << "+i";
			}
			else
			{
				stream << complex.a << "+" << complex.b << "i";
			}
		}
		else if (complex.b < 0)
		{
			if (complex.b == -1)
			{
				stream << complex.a << "-i";
			}
			else
			{
				stream << complex.a << complex.b << "i";
			}
		}
		else
		{
			stream << complex.a;
		}
	}
	return stream;
}

