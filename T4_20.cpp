/*
filename:T4_20.cpp
author:jinnan guo
2022/3/17
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned int passes=0;
    unsigned int faileres=0;
    unsigned int studentCounter=1;
    while(studentCounter<=10)
    {
        cout << "Enter result (1=pass,2=fail): ";
        int result=0;
        cin >> result;
        if(result==1||result==2)
        {
           if(result==1)
            passes=passes+1;
        else
            faileres=faileres+1;
        studentCounter=studentCounter+1;
        }
        else
            continue;

    }
    cout << "Passed " << passes << "\nfailed " << faileres <<endl;

    if(passes>8)
        cout << "Bonus to instructor!" <<endl;
    return 0;
}
