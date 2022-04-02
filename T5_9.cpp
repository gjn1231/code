/*
filename:T5_9.cpp
author:jinnan guo
2022/3/28
*/

#include <iostream>
using namespace std;
int main()
{
    int k=1;
    for(int i=1;i<16;i++)
    {
        if(i%2!=0)
        k=k*i;
    }
    cout << k;
}
