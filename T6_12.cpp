/*
filename:T6_12.cpp
author:jinnan guo
2022/4/1
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharge(double time)
{
    double charge;
    if(time<=3.0)
        charge=2.00;
    else
    {
        charge=2.00+0.5*(ceil(time)-3);
        if(charge>10)
            charge=10.00;
    }

    return charge;
}
int main()
{
    double time[3],charge,sum1=0,sum2=0;
    for(int i=0;i<3;i++)
    {
        cin >> time[i];
    }
    cout << "Car" << setw(7) << "Hour" << setw(7) << "Charge" << endl;
    for(int i=1;i<=3;i++)
    {

        cout << i << setw(9) << fixed << setprecision(1) << time[i-1] << setw(7) <<fixed << setprecision(2) << calculateCharge(time[i-1]) << endl;
        sum1+=time[i-1];
        sum2+=calculateCharge(time[i-1]);
    }
    cout << "TOTAL" << setw(5) << fixed << setprecision(1)<< sum1 << setw(7) << fixed << setprecision(2)<< sum2 <<endl;
    return 0;

}
