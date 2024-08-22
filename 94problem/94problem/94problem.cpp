//Range Sum Query
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1, num2, arr[] = { 0 }, index[2] = { 0 }, sum = 0;
	cout << "Enter the first numbers (size)\n";
	cin >> num1;
	cout << "Enter the seconed number (num of test case)\n";
	cin >> num2;
	for (int i = 0; i < num1; i++)
	{
		cout << "Enter the element of the array\n";
		cin >> arr[i];
	}
	for (int i = 0; i < num2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Enter the index numbers to Sum\n";
			cin >> index[j];
			for (int k = index[0]; k < index[1]; k++)
			{
				sum += arr[k-1];
			}
		}
		cout << "the Sum = " << sum << endl;
		sum = 0;
	}
}