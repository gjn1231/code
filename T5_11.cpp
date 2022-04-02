/*
filename:T5_11.cpp
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
   double principal=1000.0;
   double rate,r;
   cout<<"Year"<<"\tAmount on deposit"<<"\trate"<<endl;
   cout<<fixed<<setprecision(2);
       for(int s=5;s<=10;++s)
       {
          r=s;
          rate=r/100;
          for(unsigned int year=1;year<=10;++year)
          {
               amount=principal*pow(1.0+rate,year);
               cout<<year<< " \t"<<amount<< "\t\t\t" <<rate<<endl;

          }
         cout<<endl;
       }

    return 0;
}
