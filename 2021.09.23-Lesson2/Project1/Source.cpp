﻿#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int a100 = 0;
	int a10 = 0;

	cin >> n;

	a100 = n / 100;
	a10 = (n / 10) % 10;

	switch (a100)
	{
	case 1:
		cout << "Сто ";
		break;
	case 2:
		cout << "Двести ";
		break;
	case 3:
		cout << "Тристо ";
		break;
	case 4:
		cout << "Четыресто ";
		break;
	case 5:
		cout << "Пятьсот ";
		break;
	case 6:
		cout << "Шестьсот ";
		break;
	case 7:
		cout << "Семьсот ";
		break;
	case 8:
		cout << "Восемьсот ";
		break;
	case 9:
		cout << "Девятьсот ";
		break;
	default:
		break;
	}

	if (a10 != 0 && a10 != 1)
	{
		switch (a10)
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		default:
			break;
		}
		switch (n % 10)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
			default:
			cout << "бананов" << endl;
				break;
		}
	}
	else if (a10 == 1)
	{
		switch (n % 10)
		{
		case 0:
			cout << "десять бананов" << endl;
			break;
		case 1:
			cout << "одиннадцать бананов" << endl;
			break;
		case 2:
			cout << "двенадцать бананов" << endl;
			break;
		case 3:
			cout << "тринадцать бананов" << endl;
			break;
		case 4:
			cout << "четырнадцать бананов" << endl;
			break;
		case 5:
			cout << "пятнадцать бананов" << endl;
			break;
		case 6:
			cout << "шестнадцать бананов" << endl;
			break;
		case 7:
			cout << "семнадцать бананов" << endl;
			break;
		case 8:
			cout << "восемьнадцать бананов" << endl;
			break;
		case 9:
			cout << "девятнадцать бананов" << endl;
			break;
		}
	}
	else
	{
		switch (n % 10)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		}
	}

	return EXIT_SUCCESS;
}