/*
filename:T6_24.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;
int separateInteger(long n);
int main()
{
	long n;
	cin >> n;
	separateInteger(n);
	return 0;
}

int separateInteger(long n)
{
	long x = 1;
	for(long i = n; i > 10; i /= 10)
	{
		x *= 10;
	}
	while(x > 0)
	{
		cout << (n / x) % 10 << " ";
		x /= 10;

	}
	cout << endl;
}
