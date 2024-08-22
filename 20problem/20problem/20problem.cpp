#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//{
//	int num[3];/*
//	cout <<"Enter the three number to sort\n";
// 
// 
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		if (num[i] > num[i + 1])
//			swap(num[i], num[i + 1]);
//	}
//	for (int i = 0; i < 3; i++)
//		cout << num[i] << endl;*/
	int num1, num2, num3;
	int max, def, min;
	cout << "Enter the three numbers\n";
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3)
	{
		max = num1;
		if (num2 >=num3)
		{
			def = num2;
			min = num3;
		}
		else
		{
			def = num3;
			min = num2;
		}
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		max = num2;
		if (num1 >= num3)
		{
			def = num1;
			min = num3;
		}
		else
		{
			def = num3;
			min = num1;
		}
	}
	else 
	{
		max = num3;
		if (num2 >= num1)
		{
			def = num2;
			min = num1;
		}
		else
		{
			def = num1;
			min = num2;
		}
	}
	cout << min << endl;
	cout << def << endl;
	cout << max << endl;
}
