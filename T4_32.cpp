/*
filename:T4_32.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    double q,w,e;
    cin >> q >> w >> e;
    if(q<=0||w<=0||e<=0)
        {cout << "no";
        return 0;}
    else
    {
        if(q+w>e&&q+e>w&&w+e>q)
            cout << "yes";
        else
            cout << "no";
    }
        return 0;
}
