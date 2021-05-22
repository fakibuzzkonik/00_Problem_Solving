#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j,k,total = 0, countt = 0;

    cin >> a >> b;
    while(1){
        countt++;
        a = a*3;
        b = b*2;
        if(a>b){
            cout<<countt<<endl;
            return 0;
        }
    }

    return 0;
}
