#include <iostream>
using namespace std;

double Convert(double light)
{
	return light * 63240;
}
int main()
{
	double light;
	cout << "Enter the number of light years: ";
	cin >> light;
	cout << light << " light years = " << Convert(light) << " astronomical units." << endl;
	system("pause");
	return 0;
}