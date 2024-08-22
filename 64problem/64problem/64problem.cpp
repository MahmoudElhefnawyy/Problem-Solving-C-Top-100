//Finding Minimums
#include<iostream>
using namespace std;
int main()
{
	int size, group, flag = 1, counter = 0,min;
	cout << "Enter the size of numbers to find min\n";
	cin >> size;
	cout << "Enter the number of groups you want to divid\n";
	cin >> group;
	for (int i = 1; i <= size; i++)
	{
		int value;
		cout << "Enter the num \t" << i << endl;
		cin >> value;
		if (flag)      //false when flag=0
		{
			min = value;
			flag = 0;
		}
		else
		{
			if (value < min)
				min = value;
		}
		counter++;
		if (counter == group || i == size)       
		{
			cout << "Min=\t" << min << endl;
			counter = 0;
			flag = 1;
		}
	}
}

 
  