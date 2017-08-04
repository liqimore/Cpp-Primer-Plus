#include <iostream>
using namespace std;

void showMice();
void showRun();
int main()
{
	showMice();
	showMice();
	showRun();
	showRun();
	system("pause");
	return 0;
}

void showMice()
{
	cout << "Three blind mice" << endl;
}
void showRun()
{
	cout << "See how they run" << endl;
}