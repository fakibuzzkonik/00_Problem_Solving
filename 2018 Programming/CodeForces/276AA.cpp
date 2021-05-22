#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,t,a,b,c,d,e,g,h,n,k,m;
    int maxJoy = INT_MIN;
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> a >> b;

        if(b>k){
            b = a-(b-k);
        }else{
            b = a;
        }
        if(i == 0){
            maxJoy = b;
        }else if(maxJoy < b){
            maxJoy = b;
        }
    }

    cout<<maxJoy<<endl;
    return 0;
}
