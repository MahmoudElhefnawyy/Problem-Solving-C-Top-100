//PUM GAME
#include<iostream>
using namespace std;
int main()
{
	int line,number=1;
	cout << "Enter the number of lines to Game\n";
	cin >> line;
	for (int i = 1; i <= line; i++)  
	{
		for (int  j = 1; j <= 3; j++)  
		{
			 if (number % 4 != 0)  
			  {
				 cout << number << " "; 
			  }
			 else  
			  {
				 j = 0;
			  }
			 number++;
		}
		cout << "PUM" << endl;  
	}
}