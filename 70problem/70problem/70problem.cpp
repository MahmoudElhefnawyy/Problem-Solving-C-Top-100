//Summation
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 }, sum = 0;
	cout << "Enter the size of these numbers to sum\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a number to start\t " << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		sum +=num[i];
	}
	cout << "Sum=\t" << abs(sum) << endl;
}