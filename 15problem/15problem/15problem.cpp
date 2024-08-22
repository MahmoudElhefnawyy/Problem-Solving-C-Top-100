#include<iostream>
using namespace std;
int main()
{
	int A, B;
	char op;
	cout << "Enter the two numbers to start\n";
	cin >> A >> B;
	switch (op)
	{
	case '+':
		cout << "result\t" << A + B << endl;
	case '-':
		cout << "result\t" << A - B << endl;
	case '*':
		cout << "result\t" << A * B << endl;
	case '/':
		cout << "result\t" << A / B << endl;
	}
}