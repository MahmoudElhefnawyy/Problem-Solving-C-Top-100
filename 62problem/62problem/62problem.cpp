//Timon and Pumbaa
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, result = 0;
	cout << "Enter two Number to Find the difference \n";
	cin >> num1 >> num2;
	result = num1 - num2;
	if (result >= 0)
		cout << result << endl;
	else
		cout << 0 << endl;
}