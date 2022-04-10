/*
filename:T6_41.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;

int gac(int x,int y)
{
    if(y==0)
        return x;
    else
        return gac(y,x%y);

}
int main()
{
    int a,b;
    cin >> a >>b;
    while(a<b)
        cin >> a >> b;
    cout << gac(a,b);

}
