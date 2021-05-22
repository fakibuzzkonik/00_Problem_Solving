#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    vector<vector<int>>vecall;
    int i,j,t,a,b,c,n,m,k,l,sum;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        vec.push_back(a);
        vec.push_back(b);
        vecall.push_back(vec);
        vec.clear();
    }
//    for(i=0; i<n; i++){
//        for(j=i+1; j<n; j++){
//            if(vecall[i][0] > vecall[j][0]){
//                swap(vecall[i][0],vecall[j][0]);
//                swap(vecall[i][1],vecall[j][1]);
//            }
//        }
//    }
//    int price = INT_MIN, quality = INT_MAX;
//    int price1 = INT_MAX, quality1 = INT_MIN;
    for(i=0,j=n-1; i<n; i++,j--){
        if( vecall[i][0] < vecall[j][0] && (vecall[i][1] > vecall[j][1])){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;
    return 0;

}
