/*
filename:T5_10.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    int n,sum,k;
    cout << "n" << "\tn!" << endl;
    for(int i=1;i<6;i++)
    {
        k=i;
        sum=1;
        while(k!=0)
        {
            sum=sum*k;
            k--;
        }
        cout << i << "\t" << sum << endl;
    }
    return 0;
}
