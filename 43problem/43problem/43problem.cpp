//One Prime
#include<iostream>
using namespace std;
int main()
{
	int num , counter=0;
	cout << "Enter a number to check\n";
	cin >> num;
	for (int i = 2; i <= (num/2); i++)  //there is no number that divide by more than it's half 
	{
		if (num % i !=0)
			counter++;          
	}
	if (counter == (num/2)-1)  
		cout << "Prime\n";
	else
		cout << "Not Prime\n";
}