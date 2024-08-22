//Pyramid 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to find his pyramid\n";
	cin >> num;
	if(num>=1&&num<=99)
	{ 
		for (int i = 1; i <= num; i++)       //number of lines
		{
			for (int z = 1; z <= i; z++)
			{                               //number of '*'  
				cout << '*';
			}
			cout << endl;
		}
	}
	
}