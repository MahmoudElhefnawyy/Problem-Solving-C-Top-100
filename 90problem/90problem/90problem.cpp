//is B is a subsequence of A?
#include<iostream>
using namespace std;
int main()
{
	int size_A, size_B, A[] = { 0 }, B[] = { 0 }, z = 0 , counter = 0;
	cout << "Enter the size of the first array\n";
	cin >> size_A;
	cout << "Enter the size of the seconed array\n";
	cin >> size_B;
	for (int i = 0; i < size_A; i++)
	{
		cout << "Enter the element of the first array" << i + 1 << endl;
		cin >> A[i];
	}
	for (int j = 0; j < size_B; j++)
	{
		cout << "Enter the element of the seconed array" << j + 1 << endl;
		cin >> B[j];
	}
	for (int i = 0; i < size_A; i++)
	{
		if (A[i] == B[z])
		{
			counter++;
			z++;
		}
	}
	if (counter == size_B)
		cout << "Yes,B is subsquence from A \n";
	else
		cout << "No\n";
}