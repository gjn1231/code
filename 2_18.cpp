/*
filename:2_18.cpp
author:gjn
*/

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout << "input num1: ";
    cin >> num1;
    cout << "input num2: ";
    cin >> num2;

    if(num1 < num2)
        num1 = num2;
    else if(num1 == num2)
        cout << "These numbers are equal.";
    cout << num1 << "is large";

    return 0;

}
