//Replacement
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 };
	cout << "Enter the size of the array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numebrs of the array num\t" << i + 1 << endl;
		cin >> num[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (num[i] > 0)
			num[i] = 1;
		else if (num[i] < 0)
			num[i] = 2;
		else
			num[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		cout << num[i] << "\t";
	}
}