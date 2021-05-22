#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main(){
    int i,j,t,a,b,c = 1,cash = 1,d,e,f,g,h,n,m,k;
    sf("%d",&n);
    int arr[n][2];
    sf("%d%d",&a,&b);
        arr[0][0]=a;
        arr[0][1]=b;

    for(i=1; i<n; i++){
        sf("%d%d",&a,&b);
        arr[i][0]=a;
        arr[i][1]=b;
        if(arr[i][0] == arr[i-1][0] && arr[i][1] == arr[i-1][1]){
            c++;
            cash = max(cash,c);
        }else{
            c = 1;
        }
    }

    cout<<cash<<endl;
    return 0;
}
