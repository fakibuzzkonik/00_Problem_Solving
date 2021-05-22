#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,n,m;
    cin >> n;
    vector<int>vec;
    for(i=0; i<n; i++){
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    //cout<<vec[0]<<" "<<vec[1]<< " "<<vec[2]<<endl;

    if(vec[0] != 1){
        cout<<1<<endl;
        return 0;
    }

    for(i=1; i<n; i++){
        if(vec[i-1]+1 != vec[i]){
            cout<<vec[i-1]+1<<endl;
            return 0;
        }
    }

    cout<< vec[n-1]+1<<endl;
}
