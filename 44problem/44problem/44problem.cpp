//Palindrome 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int result1, result2;
	string num;
	cout << "Enter a number  to check\n";
	cin >> num;
	int size = num.size();
	char reverse[size];
	int counter = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		reverse[counter] = num[i];
		counter++;
	}
	cout << reverse << endl;
	stringstream s1;
	s1 <<num;
	s1 >>result1;
	stringstream s2;
	s2 <<reverse;
	s2 >>result2;
	if (result1 == result2)
		cout << "Yes , palindrome\n";
	else
		cout << "No\n";




/*
	int num[] = { 0 }, reverse[] = { 0 }, counter = 0;
	cout <<"Enter a number to check\n";
	for (int i = 0; i < 5; i++)*/
	//	cin >> num[i];
	//for (int j = 0; j < 5; j++)
	//{
	//	for (int i = 0; i < 5; i++)
	//		(reverse[j] = num[i]);// num = 12012
	//	cout << reverse[j];
	//}
	//for (int j = 5; j> 0; j--)
	//{
	//	for (int i = 0; i < 5; i++)
	//	{
	//		if (reverse[j] == num[i])
	//			counter++;
	//	}
	//}
	//if (counter==5)
	//	cout << "Yes ,Palindrome\n";
	//else
	//	cout << "No\n";