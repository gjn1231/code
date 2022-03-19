/*
filename:T4_28.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<8;i++)
        {
            if(i%2!=0)
                cout << " ";
            for(int j=0;j<8;j++)
                {
                    cout << "*";
                    cout << " ";
                }
          cout << endl;
        }
        return 0;
}
