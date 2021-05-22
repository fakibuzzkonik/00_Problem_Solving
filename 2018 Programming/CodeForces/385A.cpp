#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,n,m;
    vector<int>vec;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> a;
        vec.push_back(a);
    }
    int sum = 0;
    for(i=0; i<n-1; i++){
        if(sum < vec[i] - vec[i+1] - m){
            sum = vec[i] - vec[i+1] - m;
        }
    }
    cout<<sum<<endl;
    return 0;
}
