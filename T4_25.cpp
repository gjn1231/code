/*
filename:T4_25.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;

int main()
{
   int a;
   cin >> a;
   for(int i=0;i<a;i++)
   {
       if(i==0||i==a-1)
       {
           for(int j=0;j<a;j++)
           cout << "*";
           cout << endl;
       }
       else
       {
           for(int j=0;j<a;j++)
           {
               if(j==0||j==a-1)
                cout << "*";
               else
                cout << " ";

           }
           cout << endl;
       }
   }
   return 0;
}
