/*
filename:T5_5.cpp
author:jinnan guo
2022/3/28
*/
#include<iostream>
using namespace std;

int main()
{
    int a,k,sum=0;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> k;
        sum=sum+k;
    }
    cout << sum;
    return 0;
}
