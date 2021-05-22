#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,n,m;
    cin >> n;
    if(n%2 == 0){
        for(i=1; i<=n; i++){
            if(i%2 == 1){
                cout<<i+1<<" ";
            }else{

                cout<<i-1<<" ";
            }
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}
