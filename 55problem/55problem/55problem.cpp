//Shape2
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number of lines\n";
	cin >> num;
	for (int line = 1; line <= num; line++)
	{
		for (int space = line; space <= num-1;space++)  
		{
			cout << " ";
		}
		for (int star = 1; star < line * 2; star++)
		{
			cout << '*';
		}
		cout << endl;
	}
}