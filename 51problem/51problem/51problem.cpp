//Shape1
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number to find down triangle\n";
	cin >> num;
	if (num >= 1 && num <= 99)
	{
		for (int i = 1; i <=num; i++)  
		{                                         
			for (int z = num; z >= i;z--)  
			{
				cout << '*';    
			}
			cout << endl;
		}
	}
}