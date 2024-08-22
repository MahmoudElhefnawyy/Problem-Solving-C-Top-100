//GCD=greatest common divisor
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, GCD;
	cout << "Enter the two numbers to find GCD\n";
	cin >> num1 >> num2;
	if (num1 >= num2)
	{
		for (int i = 1; i <=num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
				GCD = i;
		}
		cout << "GCD=\t" << GCD << endl;
	}
	else
	{
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
				GCD = i;
		}
		cout << "GCD=\t" << GCD << endl;
	}

//{
//	int num1, num2; 
//	cout << "Enter the two number to find GCD\n";
//	cin >> num1 >> num2;
//	if (num1 > num2)  
//	{
//		if (num1 % num2 == 0)  
//			cout << "GCD=\t" << num2 << endl;
//		else  
//		{
//			for (int i = 2; i <= num2; i++)
//			{
//				int max = 2;
//				if (num2 % i == 0 && num1 % i == 0)
//				{
//					if (i>max)
//					{
//						cout << "GCD=\t" << i << endl;
//						break;
//					}
//				}
//				if (max = i == 2)
//				{
//					cout << "GCD=\t" << i << endl;
//					break;
//				}
//				else
//					cout << "NO\n";
//
//				
//					
//			}
//		}
//
//	}
//	else if(num1==num2)
//		cout << "GCD=\t" << num1 << endl;
//	else  
//	{
//		if(num2%num1==0)
//			cout << "GCD=\t" << num1 << endl;
//		else  // 9 4
//		{
//			for (int i = 2; i <= num1; i++)
//			{
//				int max = 2;
//				if (num1 % i == 0 && num2 % i == 0)
//				{
//					if (i >max)
//					{
//						cout << "GCD=\t" << i << endl;
//						break;
//					}
//				}
//				if (max = i == 2)
//				{
//					cout << "GCD=\t" << i << endl;
//					break;
//				}
//				else
//					cout << "No\n";
//			}
//		}
//	}
//}