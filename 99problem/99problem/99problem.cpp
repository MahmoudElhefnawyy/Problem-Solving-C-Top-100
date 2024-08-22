//Counting Element 
#include<iostream>
using namespace std;
int main()
{
	int size, arr[] = { 0 }, counter = 0;
	cout << "Enter the size of the array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the Element of the array\n";
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j< size; j++)
		{
			if (arr[i] + 1 == arr[j + 1])
				counter++;
		}
    }
	cout<<"Num of Element= " << counter << endl;
}