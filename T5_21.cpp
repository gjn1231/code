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
        cout<<"�����빤�ʴ��룺";
        cin>>code;
    switch(code)
    {
    case 1:
    {
        cout<<"�����뾭��ÿ�̶ܹ����ʣ�";
        cin>>a;
        cout<<endl;
    }break;
    case 2:{
        cout<<"������Сʱ��ÿ�ܹ���Сʱ��";
        cin>>h;
        cout<<"������Сʱ���̶�Сʱ���ʣ�";
        cin>>b;
        if(h<=40)
            sum2=h*b;
        else
            sum2=40*b+1.5*b*(h-40);
         cout<<endl;
    }break;
    case 3:{
        cout<<"����������ë����";
        cin>>c;
        sum3=250+0.057*c;
        cout<<endl;
    }break;
    case 4: {
        cout<<"������Ƽ��������Ĳ�Ʒ������";
        cin>>d;
        cout<<"������ÿ����Ʒ�̶���";
        cin>>e;
        sum4=d*e;
        cout<<endl;
    } break;
    }
    }

    cout<<"����\tСʱ��\tӶ��\t�Ƽ���"<<endl;
    cout<<fixed<<setprecision(2)<<a<<"\t"<<sum2<<"\t"<<sum3<<"\t"<<sum4<<endl;
    return 0;
}
