#include <iostream>
using namespace std;

int main()
{
	int miles, gas;
	cout << "Please input miles and gas IN ORDER : ";
	cin >> miles >> gas;
	cout << (double)gas / miles << "per L/miles" << endl;
	system("pause");
	return 0;
}