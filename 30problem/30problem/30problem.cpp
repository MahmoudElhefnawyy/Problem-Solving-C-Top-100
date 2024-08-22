#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3 ;
	long long result;
	char op[2];
	cout << "Enter the three numbers to check\n";
	cin >> num1 >> num2 >> num3;
	cout << "Enter the two operator to calc\n";
	for (int i = 0; i < 2; i++)
	{
		cin >> op[i];
	}
	cout << "Enter the result of the expression \n";
	cin >> result;
		if (op[0] == '+' && op[1] == '-')
		{
			if ((num1 + num2 - num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else 	if (op[0] == '-' && op[1] == '+')
		{
			if ((num1 - num2 +num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else	if (op[0] == '*' && op[1] == '-')
		{
			if ((num1 * num2 - num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else	if (op[0] == '-' && op[1] == '*')
		{
			if ((num1 - num2 * num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else if (op[0] == '*' && op[1] == '+')
		{
			if ((num1 * num2 + num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		else	if (op[0] == '+' && op[1] == '*')
		{
			if ((num1 + num2 * num3) == result)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
		        //long myresult1 =num1*num+num3;
		        //long myresult2 =num1*num+num3;
				//long myresult3 =num1*num+num3;
				//long myresult4 =num1*num+num3;
				//long myresult5 =num1*num+num3;
				//long myresult6 =num1*num+num3;
		  //if(myresult==result)
		    //flag=1;
		//if(flag==1)
		//cout<<"Yes\n";
		//else
		//cout<<"No\n";
	}
