#include "Fraction.h"

ll Fraction::NOD(ll num1, ll num2)
{
	ll a = 0;
	a = num1;
	ll b = 0;
	b = num;

	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return ll(a + b);
}

ll Fraction::NOK(ll num1, ll num2)
{
	return (num1 * num2) / NOD(num1, num2);
}

Fraction::Fraction(ll num, ll denom)
{
	this->num = num;
	if (denom != 0) this->denom = denom;
}

Fraction::Fraction(const Fraction& frac) : num(frac.num), denom(frac.denom) {}

Fraction::~Fraction()
{
	this->num = 0;
	this->denom = 0;
}

ll Fraction::getNum()
{
	return this->num;
}

void Fraction::setNum(ll num)
{
	this->num = num;
}

ll Fraction::getDenom()
{
	return this->denom;
}

void Fraction::setDenom(ll denom)
{
	if (denom != 0)	this->denom = denom;
}

void Fraction::set(ll num, ll denom)
{
	this->num = num;
	this->denom = denom;
}

Fraction& Fraction::operator=(const Fraction& frac)
{
	this->num = frac.num;
	this->denom = frac.denom;
	return *this;
}

bool Fraction::operator==(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) == (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator>(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) > (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator>=(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) >= (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator<(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) < (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

bool Fraction::operator<=(const Fraction& frac)
{
	if ((this->num * (1.0 / this->denom)) <= (frac.num * (1.0 / frac.denom)))
	{
		return true;
	}
	else
		return false;
}

Fraction Fraction::operator-()
{
	return Fraction(-this->num, this->denom);
}

Fraction Fraction::abs()
{
	ll num = 0;
	num = (this->num >= 0 ? this->num : -this->num);
	ll denom = 0;
	denom = (this->denom > 0 ? this->denom : -this->denom);
	return Fraction(num, denom);
}

Fraction Fraction::reverse()
{
	return Fraction(this->denom, this->num);
}


Fraction operator+(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom + fr2.num * fr1.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.denom;
	ll a = num;
	ll b = denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), denom / (a + b));
}

Fraction operator+(const Fraction& fr, double summ)
{
	ll num = 0;
	num = fr.num + summ * fr.denom;
	ll a = num;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), fr.denom / (a + b));
}

Fraction operator+(double summ, const Fraction& fr)
{
	ll num = 0;
	num = fr.num + summ * fr.denom;
	ll a = num;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), fr.denom / (a + b));
}

Fraction operator-(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom - fr2.num * fr1.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.denom;
	ll a = num;
	ll b = denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), denom / (a + b));
}

Fraction operator-(const Fraction& fr, double summ)
{
	ll num = 0;
	num = fr.num - summ * fr.denom;
	ll a = num;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), fr.denom / (a + b));
}

Fraction operator-(double summ, const Fraction& fr)
{
	ll num = 0;
	num = summ * fr.denom - fr.num;
	ll a = num;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), fr.denom / (a + b));
}

Fraction operator*(const Fraction& fr1, const Fraction& fr2)
{
	ll a = fr1.num * fr2.num;
	ll b = fr1.denom * fr2.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction((fr1.num * fr2.num) / (a + b), (fr1.denom * fr2.denom) / (a + b));
}

Fraction operator*(const Fraction& fr, double summ)
{
	ll a = fr.num * summ;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(fr.num * summ / (a + b), fr.denom / (a + b));
}

Fraction operator*(double summ, const Fraction& fr)
{
	ll a = fr.num * summ;
	ll b = fr.denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(fr.num * summ / (a + b), fr.denom / (a + b));
}

Fraction operator/(const Fraction& fr1, const Fraction& fr2)
{
	ll num = 0;
	num = fr1.num * fr2.denom;
	ll denom = 0;
	denom = fr1.denom * fr2.num;
	ll a = num;
	ll b = denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), denom / (a + b));
}

Fraction operator/(const Fraction& fr, double summ)
{

	ll denom = 0;
	denom = fr.denom * summ;
	ll a = fr.num;
	ll b = denom;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(fr.num / (a + b), denom / (a + b));
}

Fraction operator/(double summ, const Fraction& fr)
{
	ll num = 0;
	num = summ * fr.denom;
	ll a = num;
	ll b = fr.num;
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return Fraction(num / (a + b), fr.num / (a + b));
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fr)
{
	if (fr.denom == 1 || fr.num == 0)
	{
		stream << (fr.num == 0 ? 0 : fr.num);
	}
	else
	{
		stream << fr.num << "/" << fr.denom;
	}
	return stream;
}
