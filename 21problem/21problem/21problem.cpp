#include<iostream>
using namespace std;
int main()
{
	float num; //250.44
	int num1 = num; //250 
	float fraction = num - num1;
	cout << "Enter the number to check\n";
	cin >> num;
	if(fraction==0)
		cout << "INT\n";
	else
		cout << "Float\n";
}