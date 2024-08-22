#include<iostream>
using namespace std;
int main()
{
	/*unsigned int year, month, day;
	* 
	* 
	cout << "Enter the number of days\n";
	cin >> day;

	if (day >= 365)
	{
		year = day / 365;
		month = (day - (365 * year)) / 30;
		day = (day - (year * 365) - (month * 30));
		cout << "Year=\t" << year << endl;
		cout << "Month=\t" << month << endl;
		cout << "Day=\t" << day << endl;
	}
	else
	{
		year = 0;
		month = day / 30;
		day = day - (month * 30);
		cout << "Year=\t" << year << endl;
		cout << "Month=\t" << month << endl;
		cout << "Day=\t" << day << endl;

	}*/
	int year, month, day;
	cin >> day;
	year = day / 365;
	day -= year * 365;
	month = day / 30;
	day -= month * 30;
	cout << year << endl;
	cout << month << endl;
	cout << day << endl;
}