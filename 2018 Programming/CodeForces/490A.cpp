#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,s,n;
    cin >> n;
    vector<int>vec1,vec2,vec3,vec;
    vector<vector<int>>vecbase;
    for(i=1; i<=n; i++){
        cin >> s;
        //vec[];
        if(s == 1){
            vec1.push_back(i);
        }else if(s == 2){
            vec2.push_back(i);
        }else if(s == 3){
            vec3.push_back(i);
        }
    }
    vecbase.push_back(vec1);
    vecbase.push_back(vec2);
    vecbase.push_back(vec3);
    a = vecbase[0].size();
    b = vecbase[1].size();
    c = vecbase[2].size();
    int min1 = min(a,b);
    int min2 = min(min1,c);

    if(min2 == 0){
        //cout<<min2<<endl;
        cout<<0<<endl;
    }else{
        cout<<min2<<endl;
        for(i=0; i<min2; i++){
            cout<<vecbase[0][i]<<" "<<vecbase[1][i]<<" "<<vecbase[2][i]<<endl;
        }
    }
    return 0;

}
