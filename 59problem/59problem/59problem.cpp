//Convert To Decimal 2
#include<iostream>
using namespace std;
int main()
{
	int num_test, num, ones = 0;
	cout << "Enter the number of tests \n";
	cin >> num_test;
	for (int i = 0; i < num_test; i++)
	{
	    ones = 0;
		cin >> num;
		while (num > 0)
		{
			if (num % 2 == 1)
			{
				ones++;
			}
			num / 2;
		}
		cout << "Number of Ones=\t" << ones << endl;
		long long sum = 0;
		for (int i = 0; i <= ones; i++)
		{
			sum += 1 * pow(2, i);
		}
		cout << "Decimal NUM=\t" << sum << endl;
	}
}