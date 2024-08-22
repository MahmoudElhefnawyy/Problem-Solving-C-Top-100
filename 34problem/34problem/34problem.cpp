#include<iostream>
using namespace std;
int main()
{
	double num1, num2, num3,result ;
	cout << "Enter the three numbers to guess data type \n";
	cin >> num1 >> num2 >> num3;
	result = (num1 * num2) / num3;              //35.5
	long long myresult = result;                //35
    double fraction  =result - myresult;                    //fraction=0.5
	if (fraction > 0)
		cout << "DOUBLE\n";
	else if (fraction==0)
	{
		if (result >= -2147483648 && result <= 2147483648)
			cout << "INT\n";
		else
			cout << "LONG LONG\n";
	}
}