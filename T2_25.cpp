/*
filename:2_18.cpp
author:gjn
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "input two numbers: ";
    cin >> a >> b;
    if(a%b==0)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
