/*
filename:T4_34b.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    double sum=1,m=1,k=1;
    cin >>n;
    for(int i=0;i<n-1;i++)
    {
        k=k*m;
        sum=sum+1/k;
        m++;
    }
    cout << sum;
}
