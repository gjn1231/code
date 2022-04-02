/*
filename:T5_24.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>

using namespace std;

int main()
{
   int n=0;
   cout<<"ÇëÊäÈëÁâÐÎ±ß³¤£º  ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<(n-1)-i;j++)
            cout<<" ";
       for(int j=0;j<(2*i+1);j++)
            cout<<"*";
       cout<<endl;
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<i+1;j++)
        cout<<" ";
       for(int j=0;j<(2*(n-1)-(2*i+1));j++)
        cout<<"*";
       cout<<endl;
   }
    return 0;
}
