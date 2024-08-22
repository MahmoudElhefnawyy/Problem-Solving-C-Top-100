//Sorting 
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 };
	cout<<"Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numbers to Sort the array\t" << i + 1 << endl;
		cin >> num[i];
	}  
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (num[j] > num[i])
			{
				//swap(num[j] , num[i]);
				int temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for (int j = 0; j < size; j++)
	{
		cout << num[j] << "\t";
	}
	cout << endl;
}



