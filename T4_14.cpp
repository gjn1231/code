/*
filename:T4_14.cpp
author:jinnan guo
2022/3/13
*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    double b,c,d,e;
    cout << "Enter account number(or -1 to quit): ";
    cin >> a;
    while(a!=-1)
    {
        cout << "Enter beginning balance: ";
        cin >> b;
        cout << "Enter total charges: ";
        cin >> c;
        cout << "Enter total credits: ";
        cin >>d;
        cout << "Enter credit limit: ";
        cin >> e;

        if(b+c-d>e)
        {
            cout << "New balance is " << b+c-d << "\n" <<"Account:\t" << a << "\n" << "Credit limit:\t" << e << "\n" << "Balance:\t"<< b+c-d << "\n" << "Credit Limit Exceeded." ;

        }
        else
        {
            cout << "New balance is " << b+c-d;
        }

        cout << "\nEnter account number(or -1 to quit): ";
        cin >> a;
    }
    return 0;
}
