#include <iostream>
using namespace std;

int main()
{
	int degrees, minutes, seconds;
	double output;
	const int DEGREES = 60;
	const int MINUTES = 60;
	cout << "Enter a latitude in degrees, minutes, and seconds IN ORDER: " << endl;
	cin >> degrees >> minutes >> seconds;
	output = (double)degrees + (double)minutes / DEGREES + (double)seconds / (MINUTES*DEGREES);
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << output << endl;
	system("pause");
	return 0;
}