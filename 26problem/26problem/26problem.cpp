#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4;
	cout << "Enter the four numbers to check\n";
	cin >> num1 >> num2 >> num3 >> num4;
	int result1 = pow(num1, num2);
	int result2 = pow(num3, num4);
	if (result1>result2)
		cout << "Yes\n";
	else
		cout << "No\n";
}