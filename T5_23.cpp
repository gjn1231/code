/*
filename:T5_23.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>

using namespace std;

int main()
{
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<4-i;j++)
            cout<<" ";
       for(int j=0;j<(2*i+1);j++)
            cout<<"*";
       cout<<endl;
   }
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<i+1;j++)
        cout<<" ";
       for(int j=0;j<(8-(2*i+1));j++)
        cout<<"*";
       cout<<endl;
   }
    return 0;
}
