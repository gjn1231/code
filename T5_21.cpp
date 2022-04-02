/*
filename:T5_21.cpp
author:jinnan guo
2022/3/28
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a=0,b,c,d,e,h,sum2=0,sum3=0,sum4=0;
    int code=1;
    while(code!=0)
    {
        cout<<"请输入工资代码：";
        cin>>code;
    switch(code)
    {
    case 1:
    {
        cout<<"请输入经理每周固定工资：";
        cin>>a;
        cout<<endl;
    }break;
    case 2:{
        cout<<"请输入小时工每周工作小时：";
        cin>>h;
        cout<<"请输入小时工固定小时工资：";
        cin>>b;
        if(h<=40)
            sum2=h*b;
        else
            sum2=40*b+1.5*b*(h-40);
         cout<<endl;
    }break;
    case 3:{
        cout<<"请输入销售毛利：";
        cin>>c;
        sum3=250+0.057*c;
        cout<<endl;
    }break;
    case 4: {
        cout<<"请输入计件工生产的产品件数：";
        cin>>d;
        cout<<"请输入每件产品固定金额：";
        cin>>e;
        sum4=d*e;
        cout<<endl;
    } break;
    }
    }

    cout<<"经理\t小时工\t佣金工\t计件工"<<endl;
    cout<<fixed<<setprecision(2)<<a<<"\t"<<sum2<<"\t"<<sum3<<"\t"<<sum4<<endl;
    return 0;
}
