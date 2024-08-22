//Drawing 'X'
#include<iostream>
using namespace std;
int main()
{
	int line;
	cout << "Enter the number of lines to draw\n";
	cin >> line;
	for (int row = 0; row < line; row++)
	{
		for (int col = 0; col < line; col++)
		{
			if (row == col && row != line / 2 && col != line / 2)
				cout << "\\";
			else if (row == line / 2 && col == line / 2)
				cout << 'X';
			else if (row == (line - 1) - col)
				cout << "/";
			else
				cout << '*';
		}
		cout << endl;
	}
}
