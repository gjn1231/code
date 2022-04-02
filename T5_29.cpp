/*
filename:T5_29.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
   double amount;
   double principal=24;
   double rate,r;
   cout<<setw(21)<<"Amount on deposit"<<setw(10)<<"rate"<<endl;
   cout<<fixed<<setprecision(2);
       for(int s=5;s<=10;++s)
       {
          r=s;
          rate=r/100;
          for(unsigned int year=1;year<=387;++year)
          {
               amount=principal*pow(1.0+rate,year);

          }
         cout<<setw(21)<<amount-24<<setw(10)<<rate<<endl;
         cout<<endl;
       }

    return 0;
}
