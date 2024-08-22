//Mirror Array
#include<iostream>
using namespace std;
int main()
{
	int row, col, matrix[][3] = { 0 };
	cout << "Enter the value of rows and colums\n";
	cin >> row >> col;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the elements of the 2d array\n";
			cin >> matrix[i][j];
		}
	for (int i = 0; i < row; i++)
	{
		for (int j = col-1; j >= 0; j--)
		{
			cout << matrix[i][j]<<"\t"; 
		}
		cout << endl;
	}
}