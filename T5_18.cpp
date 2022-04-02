/*
filename:T5_18.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    int a,s=0,d=0,f=1,b,c;
    cout << "dec" << "\tbin" << "\toct" << "\thex" << endl;
    for(int i=1;i<257;i++)
    {
        cout << dec << i;
        a=i;s=0,d=0,f=1;
        while(a!=0)
        {
            s=a%2;
            d+=s*f;
            a=a/2;
            f*=10;
        }
        cout << "\t" << dec << d;
        cout << "\t" << oct << i;
        cout << "\t" << hex << i <<endl;
    }
    return 0;
}
