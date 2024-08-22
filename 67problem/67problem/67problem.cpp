//Construct The Sum
#include<iostream>
using namespace std;
int main()
{
	int test_case ,flag=1;
	cout<< "Enter the number of test case\n";
	cin >> test_case;
	for (int i = 1; i <= test_case; i++)
	{
		long long num1, num2;
		cout << "Enter two integers to find the District Numbers \n";
		cin >> num1 >> num2;
		for (int i = 0; i <= num1; i++)
		{
			for (int j = 0; j <= num1; j++)
			{
				if (i <= num1 && j<= num1 && (j +i) == num2)
				{
					cout << "num1=\t" << j <<"\t" << "num2=\t" << i << endl;
				}
				else
					flag = 0;
			}
		}
	}
	if (flag == 0)
		cout << "impossible\n";
}