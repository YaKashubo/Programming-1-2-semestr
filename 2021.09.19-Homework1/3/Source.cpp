#include<iostream>
#include<clocale>
using namespace std;
int main(int argc, char* argv)
{
	setlocale(LC_ALL, "Russian");
	int N, K;
	cout << "Сколько школьников?" << endl;
	cin >> N;
	cout << "А яблок?" << endl;
	cin >> K;
	cout << "Останется " << K % N << " яблок в корзине" << endl;
	return EXIT_SUCCESS;
}