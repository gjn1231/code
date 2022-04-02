/*
filename:T5_27.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>

using namespace std;

int main()
{
   for(unsigned int count=1;count<=10;++count)
   {
       if(count!=5)
       cout<<count<<"";
   }
   cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
