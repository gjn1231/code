/*
filename:T6_14.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger(double x)
{

    return floor(x+0.5);
}
double roundToTenths(double x)
{

    return floor(x*10+0.5)/10;
}
double roundToHundredths(double x)
{

    return floor(x*100+0.5)/100;
}
double roundToThousandths(double x)
{

    return floor(x*1000+0.5)/1000;
}
int main()
{
    double x;
    while(1)
    {
        cin >> x;
        cout << "before:" << x << "   after:" << roundToInteger(x)
        << "  " << roundToTenths(x) << "  " << roundToHundredths(x) << "  " << roundToThousandths(x) <<endl;
    }
    return 0;

}
