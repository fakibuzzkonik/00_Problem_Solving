#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,t,a,b,c,n,m,l,r,x,cur = 0,dis;
    int pause, minute = 1,watchTime = 0;
    //cout<<(int)5/3<<endl;
    cin >> n >> x;
    for(i=0; i<n; i++){
        cin >> a >> b;
        dis = abs(a - cur-1);
        if(dis%x == 0){
            watchTime += b-a+1;
            cur = b;
            //cout<<'y'<<watchTime<<endl;
        }else{
            watchTime += b-a+1+(dis%x);
            cur = b;
            //cout<<'x'<<watchTime<<endl;
        }
    }

    cout<<watchTime<<endl;
}
