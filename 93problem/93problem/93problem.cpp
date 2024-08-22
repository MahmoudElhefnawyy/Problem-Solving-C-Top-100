//Nieghbors
#include<iostream>
using namespace std;
int main()
{
	int row, col, pos1, pos2;
	char matrix[][3] = { 0 };
	cout << "Enter the number of rows and columns\n";
	cin >> row >> col;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the element of the 2D Array '.' OR 'X'\n";
			cin >> matrix[i][j];
		}
	cout << "Enter the position of the Nieghbors \n";
	cin >> pos1 >> pos2;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == '.')
			{
				if (pos1 == row - 1 && pos2 == col - 1)//x  x  x
					cout << "Yes\n";                  // x  .  x
				else                                  // x  x  x
					cout << "No\n";                   // x  .  x
			}
		}
}