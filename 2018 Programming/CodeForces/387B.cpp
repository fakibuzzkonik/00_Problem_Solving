#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c = 0,d,e,f,g,h,n,m;
    vector<int>vec_main,vec_total;
    cin >> n>> m;
    for(i=0; i<n; i++){
        cin >> a ;
        vec_main.push_back(a);
    }

    for(i=0; i<m; i++){
        cin >> a ;
        vec_total.push_back(a);
    }

    sort(vec_main.begin(), vec_main.begin()+n);
    sort(vec_total.begin(), vec_total.begin()+m);

    for(i=0,j=0; i<m; i++){
            if(vec_total[i] >= vec_main[j]){
                c++;
                j++;
            }if(n == c)
                break;
    }

    cout<<n-c<<endl;
}
