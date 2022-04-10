/*
filename:T6_27.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <iomanip>
using namespace std;
double compare(double a, double b, double c)
{
	a = (a < b) ? a : b;
	return (a < c) ? a : c;
}
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1) << "smallest: " << compare(a,b,c) << endl;
	return 0;

}
