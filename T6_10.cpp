/*
filename:T6_10.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <cmath>
using namespace std;

inline double sphereVolume(double r)
{
    return 4.0/3.0*3.14159*pow(r,3);
}
int main()
{
    double r;
    cout << "ÊäÈëÇòµÄ°ë¾¶: " ;
    cin >> r;
    cout <<  sphereVolume(r);
    return 0;
}
