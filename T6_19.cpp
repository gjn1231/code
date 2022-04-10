/*
filename:T6_19.cpp
author:jinnan guo
2022/4/1
*/
 #include<iostream>
 #include<math.h>

 using namespace std;

 int hypotenuse(double a,double b)
 {
     return sqrt(a*a+b*b);
 }
 int main()
 {
     double a,b;
     cin>>a>>b;
     cout<<hypotenuse(a,b)<<endl;
     return 0;
 }
