#include<iostream>
using namespace std;
int main()
{
	int  num;
	cout << "Enter a number to check\n";
	cin >> num;
	 int num1 = num / 10;
	 int  num2 = num % 10;
	if (num >= 10 && num <= 99)
	{
		if (num2 == 0)
			cout << "Yes ,Lucky Number\n"; //run time error 
		else if (num1 % num2 == 0 || num2 % num1 == 0)
			cout << "Yes, Lucky Number\n ";
	 	else
			cout << "NO \n";
	}
	else
		cout << "Enter a number consist of two digits \n";
}