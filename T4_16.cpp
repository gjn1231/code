/*
filename:T4_16.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b;
    cout << "Enter hours worked (-1 to end): ";
    cin >> a;
    while(a!=-1)
    {
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> b;
        if(a<40)
            cout << fixed << setprecision(2) <<"Salary is $" << a*b <<endl;
        else
            cout << fixed << setprecision(2) << "Salary is $" << 400+(a-40)*1.5*b <<endl;

        cout << "\nEnter hours worked (-1 to end): ";
        cin >> a;
    }
    return 0;
}
