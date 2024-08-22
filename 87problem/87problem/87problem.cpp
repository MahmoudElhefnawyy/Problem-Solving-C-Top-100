//Permitution with array
#include<iostream>
using namespace std;
int main()
{
	int size, A[] = { 0 }, B[] = { 0 }, counter = 0;
	cout << "Enter the size of the array A and B\n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number of the array A " << i + 1 << endl;
		cin >> A[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the numbers of the array B " << i + 1 << endl;
		cin >> B[i];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (A[i] == B[j])
			{
				counter++;
			}
		}
	}
	if (counter == size)
		cout << "Yes,it's Permitution array\n";
	else
		cout << "No\n";
	/*
	*anthor solution
	* sort(A,A+size);
	* sort(B,B+size);
	*  for(int i=0;i<size;i++)
	* if(A[i]!=B[i])
	*   break;
	*   flag=0;
	* }
	* if(flag==1)
	* cout<<"yes";
	* else
	* cout<<"no";
	* 
	*/


}