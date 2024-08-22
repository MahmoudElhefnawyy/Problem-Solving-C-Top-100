#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, num4;
	long long result;
	cout << "Enter the four numbers  from 2 to 1000\n";
	cin >> num1 >> num2 >> num3 >> num4;
	result = (num1 % 100 * num2 % 100 * num3 % 100 * num4 % 100) % 100;
	if (result > 9)
		cout << result << endl;
	else
		cout <<"0"<<result << endl; 
}