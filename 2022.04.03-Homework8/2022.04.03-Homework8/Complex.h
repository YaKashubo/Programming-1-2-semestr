#pragma once
#include<iostream>
#include<cmath>
#define pi 3.141592653

class Complex
{
private:
	double a;
	double b;
	double sqrabs(double a, double b);
public:
	Complex(double a = 0, double b = 0);
	Complex(const Complex& complex);
	~Complex();

	double getA();
	void setA(double a);
	double getB();
	void setB(double b);
	void set(double a, double b);

	Complex& operator=(const Complex& complex);
	Complex operator-();
	Complex& operator+=(const Complex& complex);
	Complex& operator+=(const double summ);
	Complex& operator-=(const Complex& complex);
	Complex& operator-=(const double summ);
	Complex& operator*=(const Complex& complex);
	Complex& operator*=(const double mult);
	Complex& operator/=(const double mult);

	Complex con();
	double arg();
	double mod();
	Complex reverse();
	void sqrtc(int n, std::ostream& stream);

	friend Complex operator+(const Complex& complex1, const Complex& complex2);
	friend Complex operator+(const Complex& complex1, const double summ);
	friend Complex operator+(const double summ, const Complex& complex1);

	friend Complex operator-(const Complex& complex1, const Complex& complex2);
	friend Complex operator-(const Complex& complex1, const double summ);
	friend Complex operator-(const double summ, const Complex& complex1);

	friend Complex operator*(const double mult, const Complex& complex);
	friend Complex operator*(const Complex& complex, const double mult);
	friend Complex operator*(const Complex& complex1, const Complex& complex2);

	friend Complex operator/(const double mult, Complex& complex);
	friend Complex operator/(const Complex& complex, const double mult);
	friend Complex operator/(const Complex& complex1, Complex& complex2);


	friend Complex powc(Complex& complex, const int n);
	friend Complex* rootc(Complex& complex, const double n);// функция, возвращающая указатель на массив корней n степени из комплексного числа

	friend std::ostream& operator<<(std::ostream& stream, const Complex& complex);
};