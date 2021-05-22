#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,t,a,b,c,d,e,f,g,h,n,m,s;
    vector<int>vec;
    cin >> n >> m;
    for(i=1; i<=n;++i){
        cin >> a; bool x = 0;
        for(j=0; j<a; j++){
            cin >> b;
            if(m>b){
                x = 1;
                vec.push_back(i);
                //cout<<i<<" ";
                break;
            }
        } //if(x) vec.push_back(i);
    }
    c = vec.size();
    sort(vec.begin(),vec.begin()+c);
    cout<<c<<endl;
    for(i=0; i<c; i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    return 0;

}
