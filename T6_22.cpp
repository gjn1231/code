/*
filename:T6_22.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;
int displaySquare(int side);
int main()
{
	int side;
	cin >> side;
	displaySquare(side);
	return 0;
 }
int displaySquare(int side)
 {
    for(int i = 0; i < side; i++)
	{
		for(int j = 0; j < side; j++)
		cout << "*";
		cout << endl;
	}
}
