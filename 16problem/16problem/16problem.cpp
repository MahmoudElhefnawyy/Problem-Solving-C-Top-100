#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to check\n";
	cin >> num;
	if (num > 999 && num <=9999)
	{
		num /= 1000;// num = num / 10
		if(num % 2 == 0)
			cout << "Even\n";
		else
			cout << "Odd\n";
	}
	else
		cout << "Wrong number\n";
}