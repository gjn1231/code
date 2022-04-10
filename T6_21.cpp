/*
filename:T6_21.cpp
author:jinnan guo
2022/4/1
*/

#include <iostream>

using namespace std;
int iseven(int s)
{int x;
       if(s%2==0)
              x=1;
       else
            x=2;

            return(x);
}
int main()
{

    int s;cin>>s;
    cout<<(iseven(s)==1? "true":"false")<<endl;
    return 0;
}
