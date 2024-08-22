//Choose Element 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int num1, num2, arr[] = { 0 }, sum = 0;
	cout << "Enter the size of the array\n";
	cin >> num1;
	cout << "Enter the Num of Element you can choose to Sum\n";
	cin >> num2;
	for (int i = 0; i < num1; i++)
	{
		cout << "Enter the Element of the array\n";
		cin >> arr[i];
	}
	sort(arr, arr + num1);
	reverse(arr, arr + num1);
	for (int i = 0; i < num2; i++)
	{
		sum += arr[i];
	}
	cout << "Max= " << sum << endl;
}