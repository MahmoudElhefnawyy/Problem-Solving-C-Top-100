#include<iostream>
using namespace std;
int main()
{
	unsigned long long Memo, Momo ,k;
	cout << "Choose a positive number (Memo and Momo) to check \n";
	cin >> Memo >> Momo;
	cout << "Enter the divisable number\n";
	cin >> k;
	if (Memo % k == 0 && Momo % k == 0)
		cout << "Both winner\n";
	else if (Memo % k == 0)
		cout << "Memo\n";
	else if (Momo % k == 0)
		cout << "Momo\n";
	else
		cout << "No one \n";




}