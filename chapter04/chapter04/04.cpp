#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName, lastName;
	cout << "Enter your firstName: ";
	getline(cin, firstName);
	cout << "Enter your lastName: ";
	getline(cin, lastName);
	cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
	system("pause");
	return 0;
}