/*
filename:T6_49.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <cmath>
using namespace std;
const double pi=3.14159;

inline double circleArea(double r)
{
    return pi*pow(r,2);
}
int main()
{
    double r;
    cout << "ÊäÈë°ë¾¶: " ;
    cin >> r;
    cout <<  circleArea(r);
    return 0;
}
