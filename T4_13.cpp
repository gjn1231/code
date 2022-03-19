/*
filename:T4_13.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double q,w,e=0,r=0;
    cout << "Enter milea driven (-1 to quit): ";
    cin >> q;
    while(q!=-1)
    {
        cout << "Enter gallons used: ";
        cin >> w;
        cout << fixed << setprecision(6) << "MPG this trip: " << q/w <<endl;
        e=e+q;r=r+w;
        cout << fixed << setprecision(6) << "Total MPG: " << e/r << endl;
        cout << "\nEnter milea driven (-1 to quit): ";
        cin >> q;
    }
    return 0;
}
