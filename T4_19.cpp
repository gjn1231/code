/*
filename:T4_19.cpp
author:jinnan guo
2022/3/17
*/

#include <iostream>
using namespace std;
int main()
{
    int counter=0,number,largest1=0,largest2=0;
    while(counter<10)
    {
         cin >> number;
         if(number>largest1)
         {
             largest1=number;
         }
         if(number>largest2)
         {
             largest1=largest2;
             largest2=number;
         }
         counter++;
    }
    cout << endl << largest1 << endl << largest2;

    return 0;
}
