/*
filename:T6_35.cpp
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
	int num = rand() % 100+ 1, counter = 0;
	cout << "I have a number between 1 and 1000 " << endl;
	cout << "Can yo guess my number?" << endl;
	cout << "Please type your first guess" << endl;
	while (1)
	{
		counter++;
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
	if (counter < 10)
		cout << "Either you know the secert or you get luck!" << endl;
	else if (counter == 10)
		cout << "Ahah!Yow know the secert!" << endl;
	else
		cout << "You should be able to do better!" << endl;
	int t;
	cin >> t;
	if (t == 1)
		goto flag;
	else
		return 0;
}
