#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,l,k,c,d,e;

    cin >> l >> k;
    if(l%2 == 0 && l+2<=k){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }else if(l%2 == 1 && l+3 <= k){
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    }else{
        cout<<-1<<endl;
    }
}
