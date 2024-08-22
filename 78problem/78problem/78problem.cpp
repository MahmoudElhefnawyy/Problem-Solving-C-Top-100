//Smallest Pair
#include<iostream>
using namespace std;
int main()
{
	int test_case, size, num[] = { 0 };
	cout << "Enter the number of test case\n";
	cin >> test_case;
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < test_case; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter the numbers to find smallest pair\t" << j + 1 << endl;
			cin >> num[j];
		}
		cout << endl;
	}
	for (int i = 0; i < test_case; i++)
	{
		int smallest_pair = num[0] + num[1] + 1;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j > i)
				{
					if ((num[i] + num[j] + j - i) < smallest_pair)
						smallest_pair = (num[i] + num[j] + j - i);
				}
			}
		}
		cout << "Smallest Pair=\t" << smallest_pair << endl;
	}
}




