/*
filename:2_18.cpp
author:gjn
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
            {for(int j=0;j<9;j++)
            cout << "*";
            cout << endl;
            }
        else
        {
            for(int j=0;j<9;j++)
            {
                if(j==0||j==8)
                    cout << "*";
                else
                    cout << " ";

            }
            cout << endl;
        }

    }

    for(int i=0;i<9;i++)
    {
        if(i==0||i==8)
            cout << "   ***   "<<endl;
        else if(i==1||i==7)
            cout << " *     * "<<endl;
        else
            cout << "*       *" << endl;

    }
    cout << "  *" << endl;
    cout << " ***" << endl;
    cout << "*****" << endl;
    for(int i=0;i<6;i++)
        cout << "  *" <<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j==4-i||j==4+i)
                cout << "*";
            else
                cout << " ";

        }
        cout << endl;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j==i+1||j==7-i)
                cout << "*";
            else
                cout << " ";

        }
        cout << endl;
    }
    return 0;
}
