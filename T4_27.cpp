/*
filename:T4_27.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    long n,m=0,k=1;
    cin >> n;
    while(n>0)
    {
        m=m+n%2*k;
        k*=2;
        n/=10;
    }
    cout << m;

    return 0;
}
