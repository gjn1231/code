/*
filename:T6_32.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>

using namespace std;
int qualityPoints(int);
int main()
{
    int score;
    cin>>score;
    cout<<qualityPoints(score)<<endl;
    return 0;
}
int qualityPoints(int score)
{
    int t=score/10;
    switch(t)
    {
        case 10:
        case 9:t=4;break;
        case 8:t=3;break;
        case 7:t=2;break;
        case 6:t=1;break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:t=0;break;
    }
    return t;

}
