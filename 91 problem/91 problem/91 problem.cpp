//Frequency Array
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, arr[] = { 0 }, counter;
	cout << "Enter the two numbers to clac\n";
	cin >> num1 >> num2;
	for (int i = 0; i < num1; i++)
	{
		cout << "Enter the element of the array num " << i + 1 << endl;
		cin >> arr[i];
	}
	for (int i = 1; i <= num2; i++)
	{
		counter = 0;
		for (int j = 0; j < num1; j++)	
	    {
				if (arr[j]==i)
		 			counter++;
		}
	   cout << "Count= " << counter << endl;
	  
    }
}
