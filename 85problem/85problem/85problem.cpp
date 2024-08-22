//Minimize Number
#include<iostream>
using namespace std;
int main()
{  
	unsigned int size, num[] = { 0 }, counter = 0, result = 0;
	cout << "Enter the size of number\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numebrs of the Array to count\t" << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (num[i] % 2 == 0)
			counter++;
	}
	if (counter == size)
	{
		for (int i = 0; i < size; i++)
		{
			counter = 0;
			while (num[i] % 2 == 0)
			{
				counter++;
				num[i] /= 2;
			}
			if (i == 0 || counter < result)
			{
				result = counter;
			}
		}
		cout << "Max operation=\t" << result << endl;
	}
	else
		cout << "Max operation=\t" << 0 << endl;
}