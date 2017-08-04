#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string Brand = "Mocha Munch";
	double weight = 2.3;
	int cal = 530;
}snake;
int main()
{
	cout << "Struct CandyBar type varible snake contains: " << endl;
	cout << snake.Brand << " and " << snake.weight << " and " << snake.cal << endl;
	system("pause");
	return 0;
}