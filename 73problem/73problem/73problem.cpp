//Position in Array
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 };
	cout << "Enter the size of numbers\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numebr of array num\t" << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (num[i] <= 10)
			cout << "num["<<i<<"] = " << num[i] << endl;  //num[0] = 1
	}

}