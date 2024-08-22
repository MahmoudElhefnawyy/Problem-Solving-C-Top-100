#include<iostream>
using namespace std;
int main()
{
	char mychar;
	cout << "Enter a digit or a alph\n";
	cin >> mychar;
	if (mychar >= 65 && mychar <= 90)
		cout << "Capital char\n";
	else if (mychar >= 97 && mychar <= 120)
		cout << "Small char\n";
	else
		cout << "Digit\n";
		
}