/*
filename:2_18.cpp
author:gjn
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Input three different intgers: ";
    cin >> a >> b >> c;

    if(a>b)
        {d=a;a=b;b=d;}
    if(b>c)
        {d=b;b=c;c=d;}

    cout << "Sum is " << a+b+c << "\nAverage is " << (a+b+c)/3 << "\nProduct is " << a*b*c << "\nSmallest is " << a << "\nLargest is " << c;

    return 0;
}
