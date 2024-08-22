//sequence of Numbers and Sum
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	long long sum = 0;
	cout << "Enter the two Numbers to Sum\n";
	while(cin >> num1 >> num2)
	if(num1>0&&num2>0)
	{
		if (num1 >= num2)
		{
			for (int i = num2; i <=num1; i++)
			{
				cout << i << "\t";
				sum += i;
			}
			cout << " sum=\t" << sum << endl;
		}
		else if(num1<num2)
		{
			for (int i = num1; i <= num2; i++)
			{
				cout << i << "\t";
				sum += i;
			}
		}
		cout << " sum=\t" << sum << endl;
	}
}

