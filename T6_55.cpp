/*
filename:T6_55.cpp
author:jinnan guo
2022/4/1
*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

unsigned int rollDice();

int main()
{
    enum Status {CONTINUE,WON,LOST};

    unsigned int myPoint=0;
    Status gameStatus=CONTINUE;
    unsigned int sum0fDice=rollDice();
    switch(sum0fDice)
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sum0fDice;
        cout << "Point is " << myPoint << endl;
        break;
    }
    while(CONTINUE==gameStatus)
    {
        sum0fDice=rollDice();
        if(sum0fDice==myPoint)
            gameStatus=WON;
        else if(sum0fDice==7)
            gameStatus=LOST;

    }
    if(WON==gameStatus)
        cout << "Player wins" << endl;
    else
        cout << "Player losts" << endl;
        return 0;

}
unsigned int rollDice()
{
    default_random_engine engine(static_cast <unsigned int> (time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,6);
    unsigned int die1=randomInt(engine);
    unsigned int die2=randomInt(engine);

    unsigned int sum=die1+die2;
    cout << "Player rolled " << die1 << "+"  << "=" << sum << endl;
    return sum;
}
