#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,sum= 0;
    scanf("%lld%lld",&n,&m);
    for(i=0; i<m; i++){
        cin >> a;
        vec.push_back(a);
    }


    sum = sum + vec[0];
    for(i=1; i<m; i++){
        a = vec[i];

        if(a == vec[i-1]){
            //sum = sum + a - vec[i-1];
        }else if(a<=n && a >= vec[i-1]){
            sum = sum + a - vec[i-1];
           // cout<<"SUM " <<sum;
        }else if(a <= n && a <= vec[i-1]){
            sum = sum + n - vec[i-1] + vec[i];
            // cout<<"SUM " <<sum;
        }else{
            cout<<"NOT FOUND"<<endl;
        }
    }

    cout<<sum-1<<endl;
    return 0;
}
