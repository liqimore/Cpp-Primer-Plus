#include <iostream>
using namespace std;

int main()
{
	int gas, dis;
	double convert;
	cout << "Please input gas via EU(gas/100km): ";
	cin >> gas;
	convert = (double)gas / 100; //Ã¿¹«ÀïºÄÓÍL
	cout << "1 miles/" << convert*0.6214 << "galon" << endl;
	system("pause");
	return 0;
}