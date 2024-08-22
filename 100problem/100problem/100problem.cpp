//Altimating Array
#include<iostream>
using namespace std;
int main()
{
	int size, arr1[] = { 0 }, arr2[] = { 0 }, counter1 = 0, counter2 = 1, temp1 = 0, temp2=0;
	cout << "Enter the size of the Array\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int value;
		cout << "Enter the Element of the Array\n";
		cin >> value;
		arr1[i] = value;
		arr2[i] = value;
	}
	arr2[0] *= -1;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			temp1 = arr1[i];
			temp2 = arr2[i];
		}
		else
		{
			if ((temp1 > 0 && arr1[i] > 0) || (temp1 < 0 && arr1[i] < 0))
			{
				arr1[i] *= -1;
				counter1++;
			}
			else if ((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0))
			{
				arr2[i] *= -1;
				counter2++;
			}
			temp1 = arr1[i];
			temp2 = arr2[i];
		}
	}
	if (counter1 < counter2)
		cout << "Min operation= " << counter1 << endl;
	else
		cout << "Min operation= " << counter2 << endl;

}