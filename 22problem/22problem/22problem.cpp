#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cout << "Enter the two number to calc\n";

	cin >> num1 >> num2;
	cout << "Enter the operator\n";
	cin >> op;
	switch (op)
	{
	case '=':
		if (num1 ==num2)
			cout << "Right\n";
		else
			cout << "Wrong\n";
		break;
	case '>':
		if (num1 > num2)
			cout << "Right\n";
		else
			cout << "Wrong\n";
		break;
	case '<':
		if (num1 < num2)
			cout << "Right\n";
		else
			cout << "Wrong\n";
		break;
	}


}