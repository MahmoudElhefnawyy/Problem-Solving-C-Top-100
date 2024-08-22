//Hady Rides The Train 
#include<iostream>
using namespace std;
int main()
{
    int seat, row, col;
    cout << "Enter the id of your seat\n";
    cin >> seat;
    row = seat / 4;
    if (row % 2 == 0)
        col = seat % 4;
    else
        col = 3 - (seat % 4);
    cout << "Row=\t" << row << "\t" << "Col=\t" << col << endl;
}