/*
filename:T6_25.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;
int sec(int h, int m, int s);
int main()
{
	int h,m,s;
	cin >> h >> m >> s;
	cout << sec(h,m,s);
	return 0;
}

int sec(int h, int m, int s)
{
	if(h > 12)
	h -= 12;
	return h * 3600 + m * 60 + s;

}
