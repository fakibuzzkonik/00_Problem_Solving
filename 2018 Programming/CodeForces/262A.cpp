#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
int LuckyFunction(int maxx){
    int item1 = 0,item2 = 4;
    int item3 = 7,item4 = 7;
    while(1){
        item1= 10*item1;
        //item2 = 10*item2+7;
        item3 = 10*item3;
        //item4 = 10*item4;
        vec.push_back(item1+4);
        vec.push_back(item1+7);
        vec.push_back(item3+4);
        vec.push_back(item3+7);
        //cout<<item1<<" "<<item2<< " ";
        if(maxx+50000<item1){
            break;
        }
        item1 = item1+4;
        item3 = item3+7;
    }
}
int main(){

    int i,j,t,a,b,c,d,e,f,g,n,m,k,l,maxx = INT_MIN;
    cin >> n >> k;
    int arr[n+2] ;
    for(i=0; i<n; i++){
        cin >> g;
        arr[i] = g;
        maxx = max(maxx,g);
    }
    cout<<maxx<<endl;
    LuckyFunction(maxx);
    sort(vec.begin(),vec.end());
    for(i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }

}
