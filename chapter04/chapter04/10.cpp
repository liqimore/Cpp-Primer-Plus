#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 3> runtime;
	cout << "your first runing time: ";
	cin >> runtime[0];
	cout << "your second runing time: ";
	cin >> runtime[1];
	cout << "your third runing time: ";
	cin >> runtime[2];
	cout << "your average time is " << (runtime[0] + runtime[1] + runtime[2]) / 3 << endl;
	system("pause");
	return 0;
}