//Prime from 1 to N
#include<iostream>
using namespace std;
int prime(int num)
{
	for (int i = 2; i <= (num / 2); i++)  //100 [1,50] 
    {
		if (num % i == 0)
		return -1;
		break;
	}
	return num;
}
int main()
{
	int number;
	cout << "Enter a number to find the rang of primes\n";
	cin >> number;
	for (int i = 2; i <= number; i++)  //number=10  1 2 3 4 5
	{
		int result = prime(i);
		if (result !=-1)
		{
			cout << "Prime=\t" << result << endl;
		}
	}
	/*
	int num;
	cout <<"Enter a number to find the prime rang\n";
	cin >> num;
	for (int i =num; i >=2; i--)
	{
		for (int j = 2; j <= (num/2); j++)
		{
			if (i==2 ||(i % j != 0 && i%3!=0))
						 cout << "Prime=\t" << i << endl;
						 break;
		}
	}
	*/

}