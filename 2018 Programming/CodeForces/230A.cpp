#include<bits/stdc++.h>
using namespace std;
bool sortcall(const vector<int>&v1, vector<int>&v2){
    return v1[0]<v2[0];
}
int main()
{
    int i,j,t,a,b,c,d,e,f,k,l,m,n,o,p,q,s,sum = 0;
    vector<int>vec;
    vector<vector<int>>vecbase;
    cin >> s >> n;
    for(i=0; i<n; i++){
         cin >> a >> b ; ///dragon strength  and bonus
         vec.push_back(a);
         vec.push_back(b);
         vecbase.push_back(vec);
         vec.clear();
    }
    //cout<<"\n"<<endl;

    m = vecbase[0].size();
    sort(vecbase.begin(), vecbase.end(), sortcall);

    for(i=0;i<n; i++){
        if(vecbase[i][0] < s){
            s = s + vecbase[i][1];
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
