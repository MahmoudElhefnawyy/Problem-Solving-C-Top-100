#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double R, PI = 3.14353272;  
	cout << "Enter the raduis of the circle \n";
	cin >> R;
	cout << fixed<<setprecision(9) << PI * R * R << endl;
}