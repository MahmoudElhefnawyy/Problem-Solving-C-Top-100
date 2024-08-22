#include<iostream>
using namespace std;
int main()
{
	int num, counter = 0;
	cout << "Enter the number to find even numbers \n";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
		else
		{
			counter++;
		}
	}
	if (counter == num)
		cout << -1 << endl;
}