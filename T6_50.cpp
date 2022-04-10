/*
filename:T6_50.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;

double tripleByValue(double a)
{
    return 3*a;

}

double tripleByference(double &a)
{
    a*=3;
}

int main()
{
    double count;
    cin >>count;
    cout << tripleByValue(count) << endl;
    tripleByference(count);
    cout << count ;

    return 0;

}
