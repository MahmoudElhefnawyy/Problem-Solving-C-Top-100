#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cout << "Enter a lowercase character\n";
	cin >> alpha;
	if (alpha >= 'a' && alpha < 'z')
	{
		alpha++;
		cout << "The new character is \t" << alpha << endl;
	}
	else if(alpha=='z')
		cout<< "The new character is \t" << 'a' << endl;
	else
		cout << "Enter a lowercase char!!!\n";
	//char letter;
	//int num=letter;
}