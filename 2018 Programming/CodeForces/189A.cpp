#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,n,m,k,l,sum = 0, maxx = -1;
    vector<int>vec;
    cin >> n >> a >> b >> c;

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(),vec.begin()+3);

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
           sum = n - vec[2]*i-vec[1]*j;
           if(sum>=0 && sum%vec[0] == 0){
                maxx = max((sum/vec[0]+i+j), maxx);
           }
        }
    }

    cout<<maxx<<endl;
    return 0;

}
