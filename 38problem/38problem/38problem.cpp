#include<iostream>
using namespace std;
int main()
{
	long long password;
	cout << "Enter your own password to check\n";
	cin >> password;
	while(password!=1999) //=while (true); 
	{
			cout << "Wrong\n";
			cin >> password;
	}
	if (password == 1999)
	{
		cout << "Correct\n";
		return 0;
	}
}