#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int feet, inch, weight, height;
	cout << "feet: ";
	cin >> feet;
	cout << "inch:";
	cin >> inch;
	cout << "pound: ";
	cin >> weight;
	height = (feet * 12 + inch) * 0.0254;
	weight = weight / 2.2;
	cout << "BMI: " << ((double)weight / (double)(height * height)) << endl;
	system("pause");
	return 0;
}