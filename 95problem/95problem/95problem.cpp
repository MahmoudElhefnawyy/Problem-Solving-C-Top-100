//Binary Search
#include<iostream>
using namespace std;
bool binary_search(int* arr, int num1, int num2, int search_num, int start, int end)
{ 
    while(start<=end)
	{
		int middle = (start + end) / 2;
				if (search_num == arr[middle])
					return true;
				else if (search_num < arr[middle])
					end = middle - 1;
				else
					start = middle + 1;
	}
}
int main()
{
	int num1, num2, arr[] = { 0 }, search_num;
	cout << "Enter the Size of the Array\n";
	cin >> num1;
	cout << "Enter the number of Query\n";
	cin >> num2;
	for (int i = 0; i < num1; i++)
	{
		cout << "Enter the Element of the Array\n";
		cin >> arr[i];
	}
	for (int i = 0; i < num2; i++)
	{
		cout << "Enter the number you search for\n";
		cin >> search_num;
	}
	int start = arr[0], end = arr[num1 - 1];
	for (int i = 0; i < num2; i++)
	{
		if ((binary_search(arr,num1, num2, search_num, start, end)) == true)
			cout << "Found\n";
		else
			cout << "Not Found\n";
	}
}