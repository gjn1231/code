/*
filename:T6_17.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int a=(rand()%5+1)*2;
    int b=(rand()%5+1)*2+1;
    int c=(rand()%5+1)*4+2;
    cout << "a:" << a << "\nb:" << b << "\nc:" << c;
    return 0;
}
