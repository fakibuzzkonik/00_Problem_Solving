#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c;
    cin >>t;
    int konik[t];
    for(i=0;i<t;i++){
        cin >> konik[i];
    }

    sort(konik,konik + t);

    for(i=0; i<t; i++){
        cout<<konik[i]<<" ";
    }

return 0;
}

