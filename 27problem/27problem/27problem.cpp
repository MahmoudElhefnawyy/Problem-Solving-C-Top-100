#include<iostream>
using namespace std;
int main()
{
	float	shirt_price; //the price after discount
	float discount_percent;//percentage of discount 
	cout << "Enter the price of t_shirt after discount\n";
	cin >> shirt_price;
	cout << "Enter the percentage of discount\n";
	cin >> discount_percent;
	float main_price = shirt_price + (main_price * (discount_percent / 100));
	cout << "The main price of the shirt is \t" << main_price << endl;
}