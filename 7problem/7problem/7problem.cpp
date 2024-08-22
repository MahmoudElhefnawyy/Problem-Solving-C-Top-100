#include<iostream>
using namespace std;
int main()
{
	int num , sum=0;
	cout << "Enter your number to sum\n";
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		sum+=i; //sum=sum+i;
	}
	cout << "Summition=" << sum+num<< endl;
	//anthor solution n(n+1)/2;
}