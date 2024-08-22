#include<iostream>
using namespace std;
int main()
{
	double num;
	cout << "Enter the number to search\n";
	cin >> num;
	if (num >= 0 && num <= 25)
		cout << "interval[0,25]\n";
	else if (num > 25 && num <= 50)
		cout << "interval(25,50]\n";
	else if (num > 50 && num <= 75)
		cout << "interval(50,75]\n";
	else if (num > 75 && num <= 100)
		cout << "interval(75,100]\n";
	else
		cout << "Out of the interval\n";
}