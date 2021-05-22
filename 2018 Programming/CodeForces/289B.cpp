#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d,a,b,c = 0,e,f,g,h,i,j,k,l, minn = INT_MAX;

    scanf("%d%d%d",&n,&m,&d);
    int arr[2*2];

    for(i=0; i<n*m; i++){
        scanf("%d",&arr[i]);

    }
    sort(arr, arr+n*m);


    for(i=0; i<n*m; i++){
        b = arr[i];
        for(j=0; j<n*m; j++){
            if(b%d == 0){
                if(b == arr[j]){
                    continue;
                }else if(b < arr[j]){
                     c = c + (arr[j]/d)-1;
                }else if(b> arr[j]){
                    c = c + arr[j]/d
                }
            }
        } cout<<c<<endl; minn = min(minn,c); c = 0;
    }

    cout<<minn<<endl;
}
