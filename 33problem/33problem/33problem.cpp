#include<iostream>
using namespace std;
int main()
{
	int eye, mouth, body, counter=0;
	cout << "Enter the number of (Eye ,Mouth , Body)\n";
	cin >> eye >> mouth >> body;
	while (eye != 0 && body != 0)
	{
		if (eye >= 2 && body >= 1)
		{
			counter++;
			eye - 2;
			body--;
			cout << "Number of souvenir=\t" << counter << endl;
		}
		else if (eye >= 2 && mouth >= 1 && body >= 1)
		{
			counter++;
			eye - 2;
			mouth--;
			body--;
			cout << "Number of souvenir=\t" << counter << endl;
		}
		else if (eye >= 1 && mouth >= 1 && body >= 1)
		{
			counter++;
			eye--;
			mouth--;
			body--;
			cout << "Number of souvenir=\t" << counter << endl;
		}
	}
}  