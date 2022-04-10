/*
filename:T6_30.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;

int kk(int n)
{
    int t,s=0;
    while(n)
    {
      t=n%10;
      s=s*10+t;
      n=n/10;
    }
    return s;
}

int main()
{
   int n;
   cin >> n;
   cout << kk(n);

    return 0;
}
