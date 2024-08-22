//Sum Digit
#include<iostream>
using namespace std;
int main()
{
	int size, sum = 0;
	string num;
	cout << "Enter the size of numbers\n";
	cin >> size;
	cout << "Enter the numbers to Sum\n";
	cin >> num;
	for (int i = 0; i < size; i++) // size=num.size();
	{
		if (num[i]-'0' <= 9)
		{
			sum += num[i]-'0';
		}
	}
	cout << "Summation=\t" << sum << endl;
}



