//Reversing
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int size, arr[] = { 0 };
	cout<<"Enter the size of the array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the element of the Array\n";
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			reverse(arr, arr + i);
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
}