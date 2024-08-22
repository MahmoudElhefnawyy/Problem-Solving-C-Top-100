//Fobonacci
#include<iostream>
using namespace std;
int fibonacci(int num)
{
	int fib;
	if (num >= 0)
	{
		if (num==0||num==1)
		{
			fib = 0;
		}
		else if (num == 2)
		{
			fib = 1;
		}
		else
		{
			fib = fibonacci(num - 1) + fibonacci(num - 2);
		}
	}
	return fib;
}
int main()
{
	int num;
	cout << "Enter the number to find his fibonacci\n ";
	cin >> num;
	cout<<"The fibonacci of "<<num<<"=\t"<< fibonacci(num) << endl;;
}
 //int position ;
 //cin>>position;
 //int start=0;
 //int sec=1;
 //if (position == 1)
	// cout << start << endl;
 //else if (position == 2)
	// cout << sec << endl;
 //else
 //{
	// for (int i = 3; i <=position; i++)
	// {
	//	 int result = start + sec; // 0  1   1  2   3   5   8
	//	 start = sec;
	//	 sec = result;
	// }
	// cout << result << endl;
 //}

