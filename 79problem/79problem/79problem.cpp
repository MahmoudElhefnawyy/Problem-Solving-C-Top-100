//Lucky Array
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 }, min = num[0], counter = 0;
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numbers to check lucky \t" << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (num[i] < min)
			min = num[i];
	}
	int result = min;
	for (int i = 0; i < size; i++)
	{
		if (result == min)
		{
			counter++;
		}
	}
	if (counter % 2 == 1)
		cout << "lucky Array\n";
	else
		cout << "Not lucky\n";

}