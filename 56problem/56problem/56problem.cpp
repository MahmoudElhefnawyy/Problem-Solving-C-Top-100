//Some Sum
#include<iostream>
using namespace std;
int main()
{
	int number, range1, range2;   
	cout << "Enter three numbers to sum\n";
	cin >> number >> range1 >> range2;
	long long sum = 0;
	for (int i = 1; i <= number; i++)                    
	{
		if (i / 10 == 0)                                 
		{
			if (i >= range1 && i <= range2)
			{
				sum += i;
			}
		}
		else
		{
			int mynumber = i;  
			int mysum = 0;
			while (mynumber)
			{
				int digit = mynumber % 10; 
				mysum += digit;   
				mynumber /= 10;   
			}                        
			if (mysum >= range1 && mysum <= range2)
			{
				sum += i;
			}
		}
	}
	cout << "Sum=\t" << sum << endl;
}