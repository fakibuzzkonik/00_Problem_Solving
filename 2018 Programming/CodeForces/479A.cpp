#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,k,l,m,n,o,p,min1,min2,min3,min4,min5,min6;
    cin >> a >> b >> c;
    min1 = a+(b*c);
    min2 = a*(b+c);
    min6 = (a*b)+c;
    min4 = (a+b)*c;
    min5 = a+b+c;
    min3 = a*b*c;
    //cout<<min1 <<" "<<min2<<" "<<min3<< " "<<min4<<endl;

    k = max(min1,min2);
    l = max(min3,min4);
    m = max(k,l);
    n = max(min5, min6);
    o = max(n,m);

    cout<<o<<endl;
    return 0;
}
