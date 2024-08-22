//Max Subarrary    
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test_case, size, num[] = { 0 }, maximum;
	cout << "Enter the number of test case \n";
	cin >> test_case;
	while (test_case--)
	{
		cout << "Enter the size of the array\n";
		cin >> size;
		for (int j = 0; j < size; j++)
		{
			cout << "Enter the numbers to find max of Sub-array\n";
			cin >> num[j];
		}
		for (int j = 0; j < size; j++)
		{
			maximum = num[j];
			cout << "Max=\t" << maximum << endl;
		}
		int i = 0;
		int j = 0;
		while (true)
		{
					if (i == size - 1)
					{
						break;
					}
					if (i == j)
					{
						maximum = max(num[i], num[j + 1]);//1 2 3 4 
					}
					else
					{
						maximum = max(maximum, num[j + 1]);
					}
					cout<< "Max=\t" << maximum << endl;
					j++;
					if (j == size - 1)
					{
						i++;
						j = i;
					}
				}
		cout << endl;
	}
}






