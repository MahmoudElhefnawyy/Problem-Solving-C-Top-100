#include<iostream>
using namespace std;
int main()
{
	int num1, num2, result;
	char op;
	cout << "Enter the two numbers to check\n";
	cin >> num1 >> num2;
	cout << "Enter the operator to start\n";
	cin >> op;
	cout << "Enter the result of the mathematical expression \n";
	cin >> result;
	switch (op)
	{
	case '+':
		if (num1 + num2 == result)
			cout << "Yes\n";
		else
			cout << num1 + num2 << endl;
		break;
	case '-':
		if (num1 - num2 == result)
			cout << "Yes\n";
		else
			cout << num1 - num2 << endl;
		break;
	case '*':
		if (num1 * num2 == result)
			cout << "Yes\n";
		else
			cout << num1 * num2 << endl;
		break;
	}

}