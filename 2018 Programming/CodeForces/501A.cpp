
#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,t,a,b,c,d,p,m,n,k,l;

    cin >> a >> b >> c >> d;

    int misha = max((3*a)/10, a-(a/250)*c);
    int vasya = max((3*b)/10, b-(b/250)*d);

    if(misha>vasya){
        cout<<"Misha"<<endl;
    }else if(misha<vasya){
        cout<<"Vasya"<<endl;
    }else if(misha == vasya){
        cout<<"Tie"<<endl;
    }

    return 0;

}
