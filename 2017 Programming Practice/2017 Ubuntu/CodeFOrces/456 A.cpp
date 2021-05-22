#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
        map<int,int>maap;
        map<int,int>::iterator it;
        int i,j,t,a,b,c,d = 0,e;

    while(n--){
        cin >> a >>b;
        maap[a] = b;
    }
    for(it = maap.begin(); it!=maap.end(); it++){
        if(it == maap.begin()){
           // cout<<it->second<<endl;
            c = it->second;
        }else if(c > it->second){
            d = 1;
            c = it->second;
        }
    }
    if(d == 1)
    cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
