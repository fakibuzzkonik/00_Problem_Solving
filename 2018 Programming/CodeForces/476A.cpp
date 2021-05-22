#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,n,m,k,l,o,p,q,r,s;
    cin >>n >> m;
    a = (n+1)/2;
    b = (a+m-1)/m*m;
    if(b>n)
        cout<<-1<<endl;
    else
        cout<<b<<endl;
    return 0;
}
