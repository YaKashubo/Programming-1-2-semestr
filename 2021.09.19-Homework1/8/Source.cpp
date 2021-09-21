#include<iostream>
using namespace std;
int main(int argc, char* argv)
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;
	int dif = 0;

	cout << "Time 1?" << endl << "Hours Minutes Seconds" << endl;
	cin >> h1 >> m1 >> s1;

	cout<<endl << "Time 2?" << endl << "Hours Minutes Seconds" << endl;
	cin >> h2 >> m2 >> s2;

	dif = (h1 * 3600 + m1 * 60 + s1) - (h2 * 3600 + m2 * 60 + s2);
	cout << "Passed " << dif << " seconds" << endl;

	return EXIT_SUCCESS;
}