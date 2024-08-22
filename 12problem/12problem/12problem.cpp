#include<iostream>
using namespace std;
int main()
{
	string name1[2], name2[2];
	cout << "Enter the two names to check\n";
	for(int i=0;i<2;i++)
	cin >> name1[i] >> name2[i];
	for (int i = 0; i < 2; i++)
	{
		if (name1[1] == name2[1])
			cout << "Brothrs\n";
		else
			cout << "Not Brothers\n";
	}
}