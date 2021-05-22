#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,a,b,c = 0,len,sum = 0, gap = 0, total = 0, maxx = 0;
    bool gate = 1;


    cin >> n;
    int shocks[n];
    memset(shocks,0,sizeof(shocks));
    for(i=0; i<n*2; i++){
        cin>> a;
        if(shocks[a-1]==0){
            shocks [a-1]= 1;
            c++;
            if(c>maxx)
                maxx = c;
        }else if(shocks[a-1]==1){
            shocks [a-1]= 0;
            c--;
        }
    }
    cout<<maxx<<endl;

    return 0;
}
