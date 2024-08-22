//Range Sum
#include<iostream>
using namespace std;
int main()
{
	int test_case, sum = 0;
	cout<<"Enter the number of test case\n";
	cin >> test_case;
	for (int i = 1; i <= test_case; i++)
	{
		int range1, range2;
		cout << "Enter the two ranges to find the sum\n";
		cin >> range1 >> range2;
		if (range1 <= range2)
		{
			for (int j = range1; j <= range2; j++)
			{
				sum += j;
			}
		}
		else
		{
			for (int j = range2; j <= range1; j++)
			{
				sum += j;
			}
		}
		cout << "Sum=\t" << sum << endl;
		sum = 0;
	}
}
// to sum an intergal from 0 << sum= N(N+1)/2

