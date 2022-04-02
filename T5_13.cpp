/*
filename:T5_13.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(int j=0;j<5;j++)
    {
        cin >> i;
        for(int l=0;l<i;l++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
