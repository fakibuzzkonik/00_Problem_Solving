#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b = INT_MAX,sum = 0,c,d1 = 0,d2 = 0,e = 0,f = 0,g = 0,h,n,m,k;

    cin >> n>> m;
    for(i=0; i<n; i++){
            cin >> a;
            if(a>=0){
                sum = sum + a;
                b = min(a,b);
            }else{
                if(m>0){
                    m--;
                    sum = sum - a; b = min(a*(-1),b);
                }else{
                    sum = sum + a; b = min(a,b);
                }


            }
            //cout<<sum <<" "<<m<<endl;
    }
        if(m%2 == 0){
            sum = sum;
        }else{
            sum = sum - (b*2);
        }


    cout<<sum<<endl;
    return 0;
}
