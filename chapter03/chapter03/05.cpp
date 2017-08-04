#include <iostream>
using namespace std;

int main()
{
	long long popw, popus;
	cout << "Enter the world's population: ";
	cin >> popw;
	cout << "Enter the population of the US: ";
	cin >> popus;
	cout << "The population of the US is " << (double)popus*100 / popw << "% of the world population." << endl;
	system("pause");
	return 0;
}