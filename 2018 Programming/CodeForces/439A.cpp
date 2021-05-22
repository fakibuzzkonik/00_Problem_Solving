#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b = 0,c,d,e,f,g,h,k,l,m,n,s;
    cin >> n >> d;
    a = (n-1)*10;
    for(i=0; i<n; i++){
        cin >> s;
        b = b+s;
    }
    c = a+b;
    e = d - c;
    if(c>d)
        cout<<-1<<endl;
    else{
        f = (a/5) + (e/5);
        cout<<f<<endl;
    }
}
