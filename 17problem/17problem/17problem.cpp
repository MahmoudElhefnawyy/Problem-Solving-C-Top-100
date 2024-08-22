#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<< "Enter num1 for x-axis , num2 for y-axis\n";
	cin >> num1 >> num2;
	if (num1 > 0 && num2 > 0)
		cout << "Q1\n";
	else if (num1 < 0 && num2 > 0)
		cout << "Q2\n";
	else if (num1 < 0 && num2 < 0)
		cout << "Q3\n";
	else if (num1 > 0 && num2 < 0)
		cout << "Q4\n";
	else  if (num1 ==0 && num2 ==0)
		cout << "Origin point \n";
	else if (num1 ==0)
	{
		if (num2 < 0)    //num2!=0
			cout << "-Y_axis\n";
		else
			cout << "Y-axis\n";
	}
	else if (num2== 0)
	{
		if (num1 < 0) //num1!=0
			cout << "-X_axis\n";
		else
			cout << "X-axis\n";
	}

	
}