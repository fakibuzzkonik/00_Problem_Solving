
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,d,e,f,g,h,n,m;

    int sum = 0;
    cin>> n;
    for(i=1; i<n; i++){

        if(i%3 == 0 || i%5 == 0){
            sum += i;
        }
    }

    cout<<sum<<endl;
}
