#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char * firstName, * lastName;
	firstName = (char *)malloc((sizeof(char)) * 64);
	lastName = (char *)malloc((sizeof(char)) * 64);
	cout << "Enter your firstName: ";
	cin.getline(firstName, 64);
	cout << "Enter your lastName: ";
	cin.getline(lastName, 64);
	cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
	system("pause");
	return 0;
}