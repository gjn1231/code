/*
filename:T6_20.cpp
author:jinnan guo
2022/4/1
*/

 #include<iostream>

 using namespace std;

 int multiple(int c,int d)
 {
     if(d%c==0)
        return 1;
     else
        return 0;
 }
 int main()
 {
     int a,b;
     cin>>a>>b;
     cout<<multiple(a,b)<<endl;
     return 0;
 }
