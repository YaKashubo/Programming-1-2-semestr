#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv)
{
	setlocale(LC_ALL, "Russian");

	int N = 0;
	int K = 0;

	cout << "Сколько школьников?" << endl;
	cin >> N;
	cout << "А яблок?" << endl;
	cin >> K;
	cout << "Поделят по " << K / N << " яблока на школьника" << endl;

	return EXIT_SUCCESS;
}