/*
filename:T6_34.cpp
author:jinnan guo
2022/4/1
*/
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(0));
flag:
	int num = rand() % 10000 + 1;
	cout << "I have a number between 1 and 1000 " << endl;
	cout << "Can yo guess my number?" << endl;
	cout << "Please type your first guess" << endl;
	while (1)
	{
		int play = 0;
		cin >> play;
		if (play > num)
		{
			cout << "Too high.Try again" << endl;
		}
		else if (play < num)
		{
			cout << "Too low.Try again" << endl;
		}
		else
		{
			cout << "Exxcellent!You guessed the number!\n" << "Would you like to play again?（1 to yes ,0 to no)\n" << endl;
			break;
		}
	}
	int t;
	cin >> t;
	if (t == 1)
		goto flag;
	else
		return 0;
}
