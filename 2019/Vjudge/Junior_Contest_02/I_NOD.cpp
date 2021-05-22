#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    for(i=0; i<n; i++){
        long long a,b,c = 0,d,e;
        cin >> a >> b;
        while(a<=b){
            if(b%a == 0){
                c++;
            }
            a++;
        }
        cout<<"RESULT "<< c<<endl;
    }
}
