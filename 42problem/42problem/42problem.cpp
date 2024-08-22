//Factorial
#include<iostream>
using namespace std;
int factorial(int num[], int size)
{
	for (int i = 0; i < size; i++)
	{
		return num[i] * factorial(&num[i] - 1, size);
	}
}
int main()
{
	int num[]={0}, size;
	int* ptr =& num[0];
	cout << "Enter the size of numbers to find factorial\n";
	cin >> size;
	if (size > 15)
	{
		cout << "Rang=[0,15] only !!\n";
		cin >> size;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number you want to factorial num\t" << i + 1 << endl;
		cin >> num[i];
		if (num[i] > 20)
		{
			cout << "Rang=[0,20] only !!\n";
			cin >> num[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << "The factorial of num =\t" << i+1<<factorial(num, size ) << endl;
	}
	/*
	* int size,num ;
	* int fact=1;
	* cin>>size;
	* while(size--)
	* {
	*    for (int i=1;i<=num;i++)
	*      fac*=i;
	* }
	* cout<<fac<<endl;
	*   fac=1;
	*/
}