#include<iostream>
using namespace std;
int main()
{
	int num[] = { 0 }, size, max;
	cout << "Enter the size of number\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number N :\t" << i + 1 << endl;
		cin >> num[i];
	}
	max = num[0];
	for (int i = 0; i < size; i++)
	{
		if (num[i] > max)
			max = num[i];
	}
	cout << "The maximum number is :\t" << max << endl;
}