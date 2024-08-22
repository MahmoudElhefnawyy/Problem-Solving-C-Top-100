#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	cout << "Enter the two numbers to calc\n";
	cin >> num1 >> num2;
    double division = num1 / num2;
	cout << "The Floor is \t" << floor(division) << endl;
    cout << "The Ceil is \t" <<ceil(division) << endl;
	cout << "The Round is \t" <<round(division) << endl;
}