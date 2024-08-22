#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter two numbers to sum\n";
	cin  >> num1 >> num2;
	cout << (num1 % 10 )+ (num2 % 10)<<endl;
}