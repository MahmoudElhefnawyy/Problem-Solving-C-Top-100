//Sum Consecutive Odd Numbers
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	long long sum_odd = 0;
	cout << "Enter two numbers to find sum\n";
	while (cin >> num1 >> num2)
	{
		if (num1 > 0 && num2 > 0)
		{
			if (num1 >= num2)
			{
				for (int i = num2; i <= num1; i++)
				{
					if (i % 2 == 1)
					{
						sum_odd += i;
					}
				}
				cout << "Sum=\t" << sum_odd << endl;
			}
			else
			{
				for (int i = num1; i <= num2; i++)
				{
					if (i % 2 == 1)
					{
						sum_odd += i;
					}
				}
				cout << "Sum=\t" << sum_odd << endl;
			}
		}
		else
			return 0;
	}
}