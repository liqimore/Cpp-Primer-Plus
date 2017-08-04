#include <iostream>
#include <string>
using namespace std;

typedef struct Pizz
{
	string Brand = "MyBrand";
	int d = 0;
	int weight = 0;
};
int main()
{
	Pizz demo;
	cout << "Brand: ";
	getline(cin, demo.Brand);
	cout << "d: ";
	cin >> demo.d;
	cout << "weight: ";
	cin >> demo.weight;
	cout << demo.Brand << endl << demo.d << endl << demo.weight << endl;
	system("pause");
	return 0;
}