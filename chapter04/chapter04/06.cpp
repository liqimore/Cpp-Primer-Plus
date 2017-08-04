#include <iostream>
#include <string>
using namespace std;

typedef struct CandyBar
{
	string Brand = "Mocha Munch";
	double weight = 2.3;
	int cal = 530;
};
int main()
{
	CandyBar candy[2];
	cout << "Struct CandyBar type varible snake contains: " << endl;
	cout << candy[0].Brand << endl;
	cout << candy[0].weight << endl;
	cout << candy[0].cal << endl;
	system("pause");
	return 0;
}