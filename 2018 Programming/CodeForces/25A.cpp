#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b= 0,c, d = 0,e,f,g,h,n,m, art = 1, gate = 0;
    cin >> n ;
    for(i=1; i<=n ;i++){
        cin >> j;
        if(j%2 == 0){
            b++;
            c = i;
        }else{
            d++;
            e = i;
        }
    }

    if(b<d){
        cout<<c<<endl;
    }else{
        cout<<e<<endl;
    }


    return 0;
}

