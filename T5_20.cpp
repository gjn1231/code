/*
filename:T5_20.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=500;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=i;k++)
                if(i*i==j*j+k*k)
                cout << i << " " << j << " " << k << endl;
        }
    }
    return 0;
}
