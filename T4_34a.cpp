/*
filename:T4_34a.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=1;
    cin >>n;
    if(n==0)
        cout << "1";
    else
    {
        while(n>0)
        {
         sum=sum*n;
         n=n-1;
        }
        cout << sum;
    }
    return 0;
}
