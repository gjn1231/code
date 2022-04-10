/*
filename:T6_42.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2)
{
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

int main()
{
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << distance(x1,y1,x2,y2);

    return 0;
}
