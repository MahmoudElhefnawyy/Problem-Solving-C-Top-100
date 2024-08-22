//Searching
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 }, searched_num, flag = 1;
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number to search\t" << i + 1 << endl;
		cin >> num[i];
	}
	cout << "Enter the number you search for\n";
	cin >> searched_num;
	for (int i = 0; i < size; i++)
	{
		if (num[i] == searched_num)
		{
			cout << "Position=\t" << i << endl;
		}
		else
			flag = 0;
	}
	if(flag==0)
		cout << "Not Exist\n";
}