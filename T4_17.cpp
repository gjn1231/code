/*
filename:T4_17.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;

int main()
{
    int counter=0,number,largest=0;
    while(counter<10)
       {
           cin >> number;
        if(number>largest)
        {
            largest=number;
        }
        counter++;
       }
       cout << largest;
    return 0;

}
