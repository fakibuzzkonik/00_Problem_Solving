#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b = 0,c,d = 0,d2 = 0,e = 0,f = 0,g,h,n,m,k;

    cin >> n>> m;
    for(i=0; i<n; i++){
        cin >> a;
        if(a>0 && e == 0){
            d= a;e = 1;
        }
        if(a<0 && f == 0){
            d2 = a;f = 1;
        }
        if(m != 0 && a<0){
            //cout<<"FOUND"<<endl;
            m--;
            b = b + (a*(-1));
        }else if(a == 0 && m>0){
            b = b + a;
            m--;
        }else{
            b = b + a;
        }
    }
    cout<<d2<<endl;

    if(m > 0){
        if(m%2 == 0){
            b = b;
        }else if(f == 1){
            b = b -  (d2*(-1));
        }else if(e == 1){
            b = b - d - d;
        }
    }

    cout<<b<<endl;
}
