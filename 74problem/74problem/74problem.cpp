//Lowest Number
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 }, lowest=0, position=0;
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int  i = 0; i < size; i++)
	{
		cout << "Enter the number to find the lowest\t" << i + 1 << endl;
		cin >> num[i];
	}
	lowest = num[0];
	for (int  i = 0; i < size; i++)
	{
		if (num[i] < lowest)
		{
			lowest = num[i];
			position = i;
		}
	}
	cout<< "The lowest= " << lowest<<"\t" <<"position= " << position+1 << endl;
}