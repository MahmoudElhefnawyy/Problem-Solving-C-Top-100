//Smallest pair
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 };
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number to find the lowest\t" << i + 1 << endl;
		cin >> num[i];
	}
}