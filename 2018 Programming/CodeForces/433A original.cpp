#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,n,m,sum = 0,sum2 = 0,sum3 = 0;
    vector<int>vec;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        sum = sum+a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.begin()+n);
    for(i=n-1; i>=0; i--){
        if(sum/2 >= sum2+vec[i]){
            sum2 = sum2 + vec[i];
            vec[i]=-1;
        }else if(sum/2 == sum2){
            break;
        }
    }
    for(i=0; i<n; i++){
        if(vec[i] != -1){
            sum3 = sum3 + vec[i];
        }
    }
    if(sum3 == sum2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
