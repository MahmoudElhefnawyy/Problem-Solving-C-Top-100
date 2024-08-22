//Three Numbers
#include<iostream>
using namespace std;
int main()
{
	int range1, range2, counter = 0, sum = 0;
	cout << "Enter the two range to start\n";
	cin >> range1 >> range2;
	if (range1 <= range2)
	{
		for (int i = 0; i <= range1; i++)
		{
			for (int j = 0; j <= range1; j++)
			{
				sum = i + j;
				if (range1 - sum >= 0 && range1 - sum <= range2)
				{
					counter++;
				}
			}
		}
		cout << "Num=\t" << counter << endl;
	}
	else
		cout << "Enter two Ascending number\n";
}