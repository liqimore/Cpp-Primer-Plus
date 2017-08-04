#include <iostream>
using namespace std;

int celToFah(int Cel)
{
	return 1.8*Cel + 32;
}
int main()
{
	int cel;
	cout << "Please enter a Celsius value : ";
	cin >> cel;
	cout << cel << " degrees Celsius is " << celToFah(cel) << " degrees Fahrenheit." << endl;
	system("pause");
	return 0;
}