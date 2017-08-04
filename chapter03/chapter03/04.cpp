#include <iostream>
using namespace std;

int main()
{
	long long seconds;
	const long DAY = 24 * 60 * 60;
	const long HOURS = 60 * 60;
	const long MINUTES = 60;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = " << seconds / DAY << " days, " << (seconds / HOURS) - (seconds / DAY) * 24 << " hours, " << seconds/MINUTES -((seconds / HOURS) - (seconds / DAY) * 24)*60 - (seconds / DAY)*24*60 << " minutes, ";
	cout << seconds - (seconds / DAY) * 24 * 60 * 60 - ((seconds / HOURS) - (seconds / DAY) * 24) * 60 * 60 - (seconds / MINUTES - ((seconds / HOURS) - (seconds / DAY) * 24) * 60 - (seconds / DAY) * 24 * 60) * 60 << "seconds" <<endl;
	system("pause");
	return 0;
}