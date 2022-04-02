/*
filename:T5_8.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    int a,k,l;
    cin >> a;
    l=a;
    for(int i=0;i<a;i++)
    {
        cin >> k;
        if(k<l)
            l=k;

    }
    cout << l;
    return 0;
}
