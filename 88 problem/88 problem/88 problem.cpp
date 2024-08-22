//Search in Matrix
#include<iostream>
using namespace std;
int main()
{
	int row, col,matrix[][2] = { 0 }, num, flag, position1, position2;
	cout << "Enter the number of rows and colums \n";
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the number of matrix " << i + 1 << "\t" << j + 1 << endl;
			cin >> matrix[i][j];
		}
	}
	cout << "Enter the number you search for\n";
	cin >> num;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (matrix[i][j] == num)
			{
				flag = 1;
				position1 = i;
				position2 = j;
			}
		}
	}
	if (flag == 1)
		cout << "Yes,Number Exist in row " << position1+1 << " and colum " << position2+1 << endl;
	else
		cout << "No";
}