//Brian Cox
//2/13/2020
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int month;
	int year;
	cout << "Enter a month (1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;
	if ((month == 2) && (year % 400 != 0) && (year % 4 != 0))
	{	
	cout << "28 days";
	}
	if ((year % 100 == 0) && (year % 400 == 0))
		{
			cout << "29 days";
		}
	if ((year % 4 == 0) && (year % 100 != 0))
	{	
			cout << "29 days";
	}
	if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
	{
		cout << "30 days";
	}
	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)
	|| (month == 12))
	{
		cout << "31 days";
	}
	return 0;
}

