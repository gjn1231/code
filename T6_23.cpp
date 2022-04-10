/*
filename:T6_23.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
using namespace std;
int displaySquare(int side, char sign);
int main()
{
	int side;
	char sign;
	cin >> side;
	cin >> sign;
	displaySquare(side, sign);
	return 0;
 }
int displaySquare(int side, char sign)
 {
    for(int i = 0; i < side; i++)
	{
		for(int j = 0; j < side; j++)
		cout << sign;
		cout << endl;
	}
}
