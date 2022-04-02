/*
filename:T5_6.cpp
author:jinnan guo
2022/3/28
*/
#include<iostream>
using namespace std;
int main()
{
    int k,a,i,sum=0;
    for(i=0; 1; i++)
    {
        cin >> a;
        if(a!=9999)
        {
            sum=sum+a;
        }
        else
            break;
    }
    cout << sum/i;
    return 0;
}
