//Easy Fibonacci
#include<iostream>
using namespace std;
int main(void)
{
	int range, start = 0, second = 1;
	cout << "Enter a number to find fibonacci\n";
	cin >> range;
	if (range == 1)
		cout << start << endl;
	else if (range == 2)
		cout << start << "\t" << second << endl;
	else
	{
		cout << start << "\t" << second<<"\t";
		for (int i = 2; i <range; i++)
		{
			int result = start + second; 
			cout << result << "\t";
			start = second;
			second = result;
		}
		cout << endl;
	}
}
//int fibonacci(int num)
//{
//	if (num >= 1 && num <= 45)
//	{
//		for (int i = 1; i <= num; i++)
//		{
//			int fib=i;
//			if (i == 1)
//			{
//				fib = 0;
//			}
//			else if (i == 2)
//			{
//				fib = 1;
//			}
//			else
//			{
//				fib = fibonacci(i - 1) + fibonacci(i - 2);
//			}
//			return fib;
//			cout << "\t";
//		}
//	}
//}
//int main()
//{
//	unsigned int num;
//	cout << "Enter a number to find fibonacci series\n";
//	cin >> num;
//	fibonacci(num);
//}
