//Square or Rectangle
#include<iostream>
using namespace std;
int main()
{
	unsigned int width, height, test_case;
	cout << "Enter the number of test case\n";
	cin >> test_case;
	while (test_case--)
	{
		cout << "Enter the width and the height of the shape\n";
		cin >> width >> height;
		if (width == height)
			cout << "Square\n";
		else
			cout << "Rectangle\n";
	}
}