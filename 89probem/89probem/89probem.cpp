//Matrix
#include<iostream>
using namespace std;
int main()
{
	int size, matrix[][4] = { 0 }, sum_main = 0, sum_sec = 0;
	cout << "Enter the size of matrix \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter the number of  the matrix " << i + 1 << " and " << j + 1 << endl;
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
				sum_main += matrix[i][j];
			else if ((i + j) == size - 1)
				sum_sec += matrix[i][j];
		}
	}
	 int result = abs(sum_main - sum_sec);
	 cout << "The Absolut Difference of matrix=\t" << result << endl;
}