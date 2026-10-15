#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month;
    int day;
    int year;
    
    cout << "Please enter the month, day, and two digit year in numeric form: ";
	cin >> month >> day >> year;

	if (month < 1 || month > 12)
	{
		cout << "Invalid month. Please enter a month between 1 and 12." << endl;
		return 0;
	}

	if (day < 1 || day > 31)
	{
		cout << "Invalid day. Please enter a day between 1 and 31." << endl;
		return 0;
	}

	cout << "You entered: " << month << "/" << day << "/" << year << endl;

	if (month * day == year)
	{
		cout << "The month is magic" << endl;
	}
	else {
		cout << "The month is not magic" << endl;
	}
}


