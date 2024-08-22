//Replace MinMax
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 };
	cout << "Enter the size of the array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number to replace\t" << i + 1 << endl;
		cin >> num[i];
	}
	int min = num[0];
	int max = num[0];
	int maxindex=0, minindex=0;
	for (int i = 1; i < size; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
			minindex = i;
	    }  
	    else if (num[i] > max)
		{
			max = num[i];
		    maxindex = i;
		}
	}
	num[minindex] = max;
	num[maxindex] = min;
	for (int i = 0; i < size; i++)
	{
		cout << num[i] << "\t";
	}
	cout << endl;
}
