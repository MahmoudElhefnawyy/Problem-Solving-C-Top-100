//multiplication table 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to find multiplication table\n";
	cin >> num;
	if (num >= 1 && num <= 50)
	{
		for (int i = 1; i <= 12; i++)
		{
			cout << num << "*" << i << "=\t" << num * i << endl;
		}
    }
}