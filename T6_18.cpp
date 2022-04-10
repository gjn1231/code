/*
filename:T6_18.cpp
author:jinnan guo
2022/4/1
*/
 #include<iostream>

 using namespace std;

 int integerPower(int base,int exp)
 {
     int ans=1;
     for(int i=1;i<=exp;i++)
     {
         ans=ans*base;
     }
     return ans;
 }
 int main()
 {
     int base,exp;
     cin>>base>>exp;
     cout<<integerPower(base,exp)<<endl;
     return 0;
 }
