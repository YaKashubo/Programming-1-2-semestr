#include<iostream>
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
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	default:
		break;
	}

	if (a10 != 0 && a10 != 1)
	{
		switch (a10)
		{
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		default:
			break;
		}
		switch (n % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	}
	else if (a10 == 1)
	{
		switch (n % 10)
		{
		case 0:
			cout << "������ �������" << endl;
			break;
		case 1:
			cout << "����������� �������" << endl;
			break;
		case 2:
			cout << "���������� �������" << endl;
			break;
		case 3:
			cout << "���������� �������" << endl;
			break;
		case 4:
			cout << "������������ �������" << endl;
			break;
		case 5:
			cout << "���������� �������" << endl;
			break;
		case 6:
			cout << "����������� �������" << endl;
			break;
		case 7:
			cout << "���������� �������" << endl;
			break;
		case 8:
			cout << "������������� �������" << endl;
			break;
		case 9:
			cout << "������������ �������" << endl;
			break;
		}
	}
	else
	{
		switch (n % 10)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		}
	}

	return EXIT_SUCCESS;
}