//Count SubArray 
#include<iostream>
using namespace std;
int main() 
{
	int test_case;
	cout << "Enter the number of test cases \n";
	cin >> test_case;
	while (test_case--)
	{
		int size, num[] = { 0 }, count1 = 0, count2 = 0;
		cout << "Enter the size of the array \n";
		cin >> size;
		for (int i = 0; i < size; i++)
		{
			cout << "Enter a number to count subarray\t" << i + 1 << endl;
			cin >> num[i];
		}
		count1 = size;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{                     
			    if (num[i] < num[j+1])
			    { 
				  count2++;
			     int result = num[i+1];
				 if (result < num[j +2])
				 {
				  count2++;
				 }
				  num[i] = num[j+3];
				}
				if (i == size - 1)
				{
					break;
				}
				if (j == size - 1)
				{
					i++;
					j = i;
				}
			}
		}
		cout << "Num of SubArray=\t" << count1 + count2 << endl;
	}
}