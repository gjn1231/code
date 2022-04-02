/*
filename:T5_12.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i+1;j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i=10;i>0;i--)
    {
        for(int j=0; j<i; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j<i)
                cout << " ";
            else
                cout << "*";
            }
        cout << endl;
    }
     cout << endl;
    for(int i=10;i>0;i--)
    {
        for(int j=0; j<i; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j>i)
                cout << " ";
            else
                cout << "*";
            }
        cout << endl;
    }
   return 0;
}
