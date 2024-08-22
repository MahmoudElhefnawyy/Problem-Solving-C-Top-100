#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a small character\n";
	cin >> ch;
	if (ch >= 97 && ch <= 120)
	{
		ch -= 32;
		cout << "Capital is \t" << ch << endl;
	}
	else
		cout << "it's already capital\n";
}