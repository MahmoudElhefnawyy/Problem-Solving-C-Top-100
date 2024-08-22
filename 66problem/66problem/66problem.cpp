//Break Number
#include<iostream>
using namespace std;
int main()
{
	int size, result = 0;
	cout <<"Enter the size of numbers to find F(x)\n";
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		int counter = 0;
		long long num;
		cout << "Enter a number to start\t";
		cin >> num;
		if (num % 2 != 0)
		{
			counter = 0;
		}
		else
		{
			while (num > 0)//10    5 
			{
				if (num % 2 != 0)
				{
					break;
				}
				else
				{
					counter++;
					num /= 2;
				}
			}
		}
		if (counter > result)
			result = counter;
	}
	cout << "Max=\t" << result << endl;
}