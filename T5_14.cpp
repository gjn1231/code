/*
filename:T5_14.cpp
author:jinnan guo
2022/3/28
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float sum=0;
    cin >> a;
    while(a!=0)
    {
        cin >> b;
        switch(a)
        {
            case 1:sum=sum+b*2.98;break;
            case 2:sum=sum+b*4.50;break;
            case 3:sum=sum+b*9.98;break;
            case 4:sum=sum+b*4.49;break;
            case 5:sum=sum+b*6.87;break;
        }
        cin >> a;
    }
    cout << sum;
    return 0;
}
