#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,k,a,b,c,e,f,sum,n,m;
    vector<int>d;
    d.push_back(1);
    cin >> n;
    for(i = 2; i<=n; i++){
        for(j=0; j<d.size(); j++){
            d[j] *= i;
        }

        for(j=0; j<d.size(); j++){
            if(d[j] < 10 )
                continue;

            if(j == d.size()-1)
                d.push_back(0);

            d[j+1] +=  d[j]/10;
            d[j] = d[j] %10;
        }
    }
    for(i = d.size()-1; i>=0; i--){
        cout<<d[i];
    }cout<<endl;
}
