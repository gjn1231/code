/*
filename:T6_52.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;

double minimum(double a,double b)
{
    return (a>b?b:a);
}
int main()
{
    int a,b;
    char c,d;
    double e,f;
    cout << "input int:";
    cin >> a >> b;
    cout << minimum(a,b) << endl;
    cout << "input char:";
    cin >> c >> d;
    cout << minimum(c,d) << endl;
    cout << "input double:";
    cin >> e >> f;
    cout << minimum(e,f) << endl;

    return 0;
}
