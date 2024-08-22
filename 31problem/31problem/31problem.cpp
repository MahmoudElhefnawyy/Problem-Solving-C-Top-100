#include<iostream>
using namespace std;
int main()
{
	/* 
	int  start, end,num;
	int count_odd, count_even;
	cout << "Enter the Start and End of the interval\n";
	cin >> start >> end;
	 num = start;
	for(int num=start;num<=end;num++)
	{
		if (num % 2 == 0)
			count_even++;
		else
			count_odd++;
	}
	if (count_even == count_odd)
		cout << "Yes\n";
	else
		cout << "No\n";*/
	int start, end;
	cout << "Enter the Start and End of the interval\n";
	cin >> start >> end; 
	if((start==0&&end==0) || abs(start - end) > 1)
	    cout << "No\n";
	else
		cout << "Yes\n";


}