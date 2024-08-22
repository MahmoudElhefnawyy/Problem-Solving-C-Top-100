#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the two numbers to check\n";
	cin >> num1 >> num2;
	if (num1 % num2 == 0 || num2 % num1 == 0)
		cout << "Multiples" << endl;
	else
		cout << "Not Multiples" << endl;
}