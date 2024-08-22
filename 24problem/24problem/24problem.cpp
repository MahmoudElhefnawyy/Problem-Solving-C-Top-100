#include<iostream>
using namespace std;
int main()
{
	int interval1[2],interval2[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter the first interval of\t" << i + 1 << endl;
		cin >> interval1[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter the second interval of\t" << i + 1 << endl;
		cin >> interval2[i];
	}
	 if((interval2[0] > interval1[1] && interval2[1] > interval1[1])||(interval2[0]<interval1[0] && interval2[1] < interval1[0]))
	cout << "-1\n";
	 else	if (interval1[0] == interval2[0])
	{
		if (interval1[1] <= interval2[1])
			cout << "The intersection=\t" << interval1[0] << "\t" << interval1[1] << endl;
		else
			cout << "The intersection=\t" << interval2[0] << "\t" << interval2[1] << endl;  

	}
	else if (interval1[0] < interval2[0])
	{
		if (interval1[1] <= interval2[1])
			cout << "The intersection=\t" << interval2[0] << "\t" << interval1[1] << endl;
		else
			cout << "The intersection=\t" << interval2[0] << "\t" << interval2[1] << endl;
	}
	else if (interval1[0] > interval2[0])
	{
		if (interval1[1] <= interval2[1])
			cout << "The intersection=\t" << interval1[0] << "\t" << interval1[1] << endl;
		else
			cout << "The intersection=\t" << interval1[0] << "\t" << interval2[1] << endl;
	}
	 /*
	 * int num1 , num2, num3 ,num4;
	 * cin>>num1>>num2>>num3>>num4;
	 * if(num3>num2&&num4>num2)||(num3<num1&&num4<num1)
	 * cout<<"-1\n";
	 * else
	 * {if (num1>num3)
	 *  start=num1;
	 * else
	 * star=num3;
	 * else if(num2>num4)
	 * end=num4;
	 * else
	 * end=num2;
	 * 
	 * 
	 * 
	 */
	





}