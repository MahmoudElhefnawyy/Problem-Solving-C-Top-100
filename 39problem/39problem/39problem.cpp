#include<iostream>
using namespace std;
int main()
{
	int positive = 0, negative = 0, even = 0, odd = 0, size;
	int num[]={0};
	cout << "Enter the Size of numbers \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number:\t" << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (num[i] % 2 == 0)
			even++;
		else
			odd++;
		if (num[i] > 0)
			positive++;
		else if (num<0)
			negative++; 
	}
	cout << "Even:\t" << even << endl;
	cout << "odd :\t" << odd << endl;
	cout << "positive:\t" << positive << endl;
	cout << "negative:\t" << negative << endl;
}