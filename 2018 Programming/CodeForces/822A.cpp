#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,n,k,m,answer = 1;

    cin >> a >> b;
    n = min (a,b);
    for(i = 1; i<=n; i++){
        answer = answer*i;
    }
    cout<< answer<<endl;
}
