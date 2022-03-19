/*
filename:T4_15.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double k;
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> k;
    while(k!=-1)
    {
        cout << fixed<<setprecision(2)<< "Salary is $" << 200+k*0.09 << endl;
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> k;
    }

    return 0;
}
