//Shape3
#include<iostream>
using namespace std;
int main()
{
	int line;
	cout <<"Enter the number of lines\n";
	cin >> line;
	if (line >= 1 && line <= 99)
	{
		for (int i = 1; i <= line; i++) //up diamond
		{
			for (int space = line - 1; space >= i; space--)
			{
				cout << ' ';
			}
			for (int star = 1; star < i * 2; star++)
			{
				cout << '*';
			}
			cout << endl;
		}
		for (int i = 1; i <= line; i++) //down diamond
		{
			for (int space = 1; space <= i-1; space++)
			{
				cout << ' ';
			}
			for (int star = line*2; star >=i*2; star--) 
			{        
				cout << '*';  
			}
			cout << endl;
		}
	}
}