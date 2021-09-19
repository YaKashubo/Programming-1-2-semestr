#include<iostream>
using namespace std;
int main(int argc, char* argv)
{
	int h1 = 0, m1 = 0, s1 = 0, h2 = 0, m2 = 0, s2 = 0, dif=0;

	cout << "Time 1?" << endl << "Hours Minutes Seconds" << endl;
	cin >> h1 >> m1 >> s1;

	cout<<endl << "Time 2?" << endl << "Hours Minutes Seconds" << endl;
	cin >> h2 >> m2 >> s2;

	dif = (h1 * 3600 + m1 * 60 + s1) - (h2 * 3600 + m2 * 60 + s2);
	cout << "Passed " << dif << " seconds" << endl;

	return EXIT_SUCCESS;
}