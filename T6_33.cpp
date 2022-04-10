/*
filename:T6_33.cpp
author:jinnan guo
2022/4/1
*/
#include<iostream>
#include<ctime>
using namespace std;
int flip()
{

		unsigned int flip01 = rand() % 2;
		cout << flip01;
		if(flip01==0)
            cout << ": Tail;" << endl;
        else
            cout << ": Head;" << endl;
		return flip01;
}
int main()
{	srand((unsigned int)time(0));
	unsigned int T = 0;
	unsigned int H = 0;
	for (unsigned int i = 1; i <= 100; i++)
	{
		if (flip() == 1)	H++;
		if (flip() == 0)	T++;

	}

	cout << "T:\t" << T << endl;
	cout << "H\t" << H << endl;
		return 0;
}
