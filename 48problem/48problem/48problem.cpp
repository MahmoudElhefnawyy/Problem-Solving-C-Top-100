//Lucky Number  
#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter two numbers to find the lucky\n";   
	cin >> num1 >> num2;
	if (num1 >= num2)
	{
		int k = 10;
		for (int i = num2; i <= num1; i++)
		{
			if (i % k == 4 || i % k == 7)
				cout << "lucky=\t" << i << endl;
		}
		k *= 10;
	}
	else
		cout << -1 << endl;
	 
}