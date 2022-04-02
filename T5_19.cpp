/*
filename:T5_19.cpp
author:jinnan guo
2022/3/28
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float pi=1,q,c;
    for(int i=1;i<=1000;i++)
    {
        cout << i << ":";
        c=3;pi=1;
        for(int j=1;j<i;j++)
        {

            q=pow(-1,j);
            pi=pi+q*(1/c);
            c+=2;
        }
        cout << pi*4 <<endl;
    }
    return 0;
}
