/*
filename:T4_33.cpp
author:jinnan guo
2022/3/17
*/

#include<iostream>
using namespace std;
int main()
{
    int q,w,e;
    cin >> q >> w >> e;
    if(q<=0||w<=0||e<=0)
        {cout << "no";
        return 0;}
    else
    {
        if(q*q==w*w+e*e||w*w==q*q+e*e||e*e==q*q+w*w)
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
}
