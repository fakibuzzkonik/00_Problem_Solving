#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,n,p,q,m;
    cin >> m;
    for(i=0; i<m; i++){
        cin >> n >> p >> q;
        int sum = 0, count1 = 0, count2 = 0;
        bool gate = true;
        for(j=0; j<n; j++){
            cin >> a;
            if(sum+a <= q && gate == true){
                sum += a;
                count1++;
            }else{
                gate = false;
            }

            if(gate == true && count2 < p){
                count2++;
            }else{
                count2 = p;
                gate = false;
            }
        }
        cout<<"Case "<<i+1<<": "<<min(count1,count2)<<endl;
    }

}
