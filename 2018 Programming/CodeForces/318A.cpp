#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,t,a,b,c,n,m,o,p,sum = 1;
    cin >> a >> b;

    if(a%2 == 0){
         n = a/2;
         m = a/2;///bejor
    }

    else{
        n = a/2 + 1;
        m = a/2;///bejor
    }



    if(b<=n){
        cout<< b*2-1<<endl;
        return 0;
    }else{
        c = b-n;
        cout<< c*2<<endl;
        return 0;
    }
}
