/*
filename:T4_34c.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum=1,m=1,k=1,x;
    cin >> x;
     for(int i=0;i<n-1;i++)
    {
        k=k*m;
        sum=sum+x/k;
        m++;
        x*=x;
    }
    cout << sum;
    return 0;
}
