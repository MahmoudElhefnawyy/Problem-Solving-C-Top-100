//Divisors
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number to start\n";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			cout << "divisor=\t" << i<<endl;
	}
}