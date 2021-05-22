#include<bits/stdc++.h>
using namespace std;
#define sf scanf
int main(){
    int i,j,t,a,b = INT_MAX,c,d1 = 0, d , n , m,sum = 0;
    sf("%d%d",&n,&m);
    for(i=0; i<n; i++){
        sf("%d",&a);
        if(a>=0){
            sum = sum + a;
            //cout<<sum<<endl;
        }else{
            if(m>0){
                m--;
                a = a * (-1);
            }
                sum =sum + a;

        }
        b = min(a,b);
    }

    if(m%2 != 0){
        sum = sum - (b*2);
    }
    cout<<sum<<endl;
    return 0;
}
