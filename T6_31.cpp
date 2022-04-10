/*
filename:T6_31.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include<bits/stdc++.h>
int gcd01(int,int);
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd01(a,b)<<endl;
    return 0;
}
int gcd01(int a,int b)
{
    int t=__gcd(a,b);
    return t;
}
