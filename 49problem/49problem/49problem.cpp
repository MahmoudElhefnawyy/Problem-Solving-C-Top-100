//Numbers Histogram
#include<iostream>
using namespace std;
int main()
{
	int num[]={0}, size;
	char shape;
	cout << "Enter the char (+ , - , * ,/) to start\n";
	cin >> shape;                                           
	cout << "Enter the size of numbers \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number \t" << i + 1 << endl;
		cin >> num[i];
    }
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < num[i]; j++)   
		{
			cout << shape;
		}
		cout << endl;
	}
}