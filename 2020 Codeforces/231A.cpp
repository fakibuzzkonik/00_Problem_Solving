#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,m,n,a,b,c,cnt = 0;;
    cin >> n;
    for(i = 0; i<n; i++){
        cin >> a >> b >> c;
        if(a+b+c >=2 ){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
