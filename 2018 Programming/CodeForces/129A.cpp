#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d = 0,even(0),odd(0),f,g,h,m,n,k,l,o,p,sum = 0;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        if(a%2 == 0)
            even++;
        else
            odd++;
    }
    if(odd%2 != 0)
        cout<<odd<<endl;
    else
        cout<<even<<endl;
    return 0;

}
