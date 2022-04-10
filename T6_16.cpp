/*
filename:T6_16.cpp
author:jinnan guo
2022/4/1
*/
 #include<iostream>
 #include<stdio.h>
 #include<cstdlib>

 using namespace std;

 int main()
 {
     int num1=1,num2=2;
     int a=(rand()%(num2-num1+1))+num1;
     cout<<a<<endl;
     int num3=1,num4=100;
     int b=(rand()%(num2-num1+1))+num3;
     cout<<b<<endl;
     int num5=0,num6=9;
     int c=(rand()%(num2-num1+1))+num5;
     cout<<c<<endl;
     int num7=1000,num8=1112;
     int d=(rand()%(num2-num1+1))+num7;
     cout<<d<<endl;
     int num9=-1,num10=1;
     int e=(rand()%(num2-num1+1))+num9;
     cout<<e<<endl;
     int num11=-3,num12=11;
     int f=(rand()%(num2-num1+1))+num11;
     cout<<f<<endl;
     return 0;
 }
