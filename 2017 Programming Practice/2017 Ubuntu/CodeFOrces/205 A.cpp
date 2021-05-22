#include<bits/stdc++.h>
using namespace std;
#define maximum INT_MAX
int main()
{
    long long i,j,t,k,a,b,c = maximum, out1;
    int out2 = -1;
    map<long long,int>maap;
    map<long long,int>::iterator it;
    //cout<<min(maximum,1000000000)<<endl;
    cin >> t;
    for(i=1; i<=t; i++){
        cin >> a;
        maap[a]++;
        if(c > min(c,a)){
            out2 = i;
            c = min(c,a);
        }

    }
    it = maap.begin();
       if(it->second == 1){
            cout<<out2<<endl;
       }else
            cout<<"Still Rozdil"<<endl;


}
