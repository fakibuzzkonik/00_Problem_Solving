#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,g,k,l,m,n;
    int dif1,dif2,wa = 0, wb =  0,draw = 0;
    cin >> a >> b;
    for(i=1; i<=6; i++){
        dif1 = (i-a);
        dif1 = abs(dif1);
        dif2 =  (i-b);
        dif2 = abs(dif2) ;
        //cout<<dif1<<" "<<dif2<<endl;
        if(dif1<dif2){
            wa++;
        }else if(dif2<dif1){
            wb++;
        }else if(dif1 == dif2){
            draw++;
        }
    }

    cout<<wa<<" "<<draw<<" "<<wb<<endl;
    return 0;
}
