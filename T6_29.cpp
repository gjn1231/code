/*
filename:T6_29.cpp
author:jinnan guo
2022/4/1
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int isprime(int a)
{
	int b = 0,c = 0;

	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
		c = c + 1;
	}
    if(c>0)
        return 0;
    else
        return a;
}


int main()
{
	for(int i = 1; i <= 10000; i++)
	{
		if(isprime(i) != 0)
		cout << isprime(i) << endl;
	}

	 	return 0;
}

