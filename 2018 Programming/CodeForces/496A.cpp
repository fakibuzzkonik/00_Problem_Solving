#include<bits/stdc++.h>
using namespace std;
int arr[3];
int main(){
    int i,j = 0,t,a,b,c,d,e,f,g,k,l,m,n,minn = INT_MAX, maxx = INT_MIN;
    int dif1,dif2,wa = 0, wb =  0,draw = 0;

    cin >> n;
    vector<int>vec1,vec2;
    for(i=0; i<n; i++){
        cin >> a;
        vec1.push_back(a);
    }

    for(i=1; i<n-1; i++){
            maxx = 0;
            vec2 = vec1;
            vec2.erase(vec2.begin()+i);
            for(j=0; j<vec2.size()-1; j++){
                maxx = max(maxx,vec2[j+1]-vec2[j]);
            }
            minn = min(maxx,minn);
    }


    cout<<minn<<endl;
    return 0;
}
