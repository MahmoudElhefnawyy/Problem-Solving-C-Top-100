#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout <<"Enter the three numbers to calac\n";
	cin >> num1 >> num2 >> num3;
	if (num1 < num2 && num1 < num3)
	{
		if (num2 > num3)
		{
			cout << "Min=\t" << num1 << endl;
			cout << "Max=\t" << num2 << endl;
		}
		else
		{
			cout << "Min=\t" << num1 << endl;
			cout << "Max=\t" << num3 << endl;
		}
	}
	else if (num2 < num1 && num2 < num3)
	{
		if (num1 > num3)
		{
			cout << "Min=\t" << num2 << endl;
			cout << "Max=\t" << num1 << endl;
		}
		else
		{
			cout << "Min=\t" << num2 << endl;
			cout << "Max=\t" << num3 << endl;
		}

	}
	else if (num3 < num1 && num3 < num2)
	{
		if (num1 > num2)
		{
			cout << "Min=\t" << num3 << endl;
			cout << "Max=\t" << num1 << endl;
		}
		else
		{
			cout << "Min=\t" << num3 << endl;
			cout << "Max=\t" << num2 << endl;
		}
     
	}	
}