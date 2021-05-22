#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,a,b,c,count = 0,save = 0;
    map<int,int>maap;
    map<int,int>::iterator it;
    cin >> a >> n;
    for(i=0; i<n; i++){
        cin>>b>>c;
        maap[b] = c;
    }
    for(it=maap.begin(); it!=maap.end(); it++){

        b = it->first;
        c = it->second;
        cout<<a<<" "<<b<<" "<<c<<endl;
        if(a>b){
            cout<<"winner"<<endl;
            a += c;
            count++;
        }
        else{
            cout<<"Loser"<<endl;
            //break;
        }
    }

    if(count == n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
