#include<iostream>
using namespace std;
int main()
{
	int anything ;
	cout <<"Enter a digit or a alph\n";

	cin >>anything;
	for (int i = 0; i < 9; i++)
	{
		if (anything == i)
			cout << "Digit\n";
	}	
	for (char i = 'a'; i < 'z'; i++)
	{
		if (anything == 'i')
			cout << "small alpha\n";
		else
			cout << "Capital alpha";
	}

}