//Digits
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size;
	cout << "Enter the size of numbers \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		string num;
		cout << "Enter your number\n";
		cin >> num;
		for (int j = num.size() - 1; j >= 0; j--)    
		{
			cout << num[j] << "\t";
		}
		cout << endl;
	}

	/*int size;
	string num[] = { 0 };
	cout << "Enter the size of numbers \n";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}
	if (size >= 1 && size <= 10)
	{
		for (int i = 0; i <size;i++)
		{
			int div = pow(10, num[i].size());
			for (int j = 1; j <=num[i].size();j++)
			{
				stringstream x;
				x << num[i];
				num[i] >> x;
				cout << num[i] %(div) << " ";
				div /= 10;
			}
			cout << endl;
		}
	}
}*/
}