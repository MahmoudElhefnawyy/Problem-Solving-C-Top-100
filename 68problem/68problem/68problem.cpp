//Simple Mode
#include<iostream>
using namespace std;
int main()
{
	unsigned int num;
	cout << "Enter a number to find simple mode\n";
	cin >> num;
	for ( int i = 0; i <= num; i++)
	{
		for ( int j = 0; j <= num; j++)
		{
			int sum = i*i + j*j;
			if (sum % num == 0)
			{
				cout << "num1=\t" << j << "\t" << "num2=\t" << i << endl;
			}
		}
	}
}