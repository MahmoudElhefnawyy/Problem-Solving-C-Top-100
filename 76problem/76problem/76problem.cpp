//Palindrome Array
#include<iostream>
using namespace std;
int main()
{
	int size, num[] = { 0 }, counter = 0;
	cout << "Enter the size of the array \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number to check\t" << i + 1 << endl;
		cin >> num[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (num[(size-1)-i] == num[i]) 
		{
			counter++; 
	    }
	}	
	if (counter == size)
		cout << "Palindrome Array\n";
	else
		cout << "Not Palindrome\n";
}