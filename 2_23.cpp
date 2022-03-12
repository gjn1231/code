/*
filename:2_18.cpp
author:gjn
*/

#include<iostream>
using namespace std;
int main()
{
    int q,w,e,r,t,n;
    cout << "input five numbers: ";
    cin >> q >>w >> e >> r >> t;
    if(q>w){n=q;q=w;w=n;}
    if(w>e){n=w;w=e;e=n;}
    if(e>r){n=e;e=r;r=n;}
    if(r>t){n=r;r=t;t=n;}

    cout << "max: " << t << endl;

    if(q<w){n=q;q=w;w=n;}
    if(w<e){n=w;w=e;e=n;}
    if(e<r){n=e;e=r;r=n;}
    if(r<t){n=r;r=t;t=n;}

    cout << "min: " << t;

    return 0;


}
