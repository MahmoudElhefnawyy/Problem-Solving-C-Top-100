//Check Code
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1, num2, counter = 0;
	string code;
	cout << "Enter the two numbers to check\n";
	cin >> num1 >> num2;
	cout << "Enter the (S) code from 0 to 9 \n";
	cin >> code;
	int size = code.size();
	if (size == (num1 + num2+1))  
	{
		for (int i = 0; i < size; i++)
		{
			if (code[i] - '0' <= 9 && i != num1)
			{
				counter++;
			}
			else if (code[i] == '-')
			{
				if (i == num1)
				{
					counter++;
				}
			}
		}
		if (counter == size)
			cout << "Yes,correct code\n";
		else
			cout << "No\n";
	}
	else
		cout << "No\n";   

}