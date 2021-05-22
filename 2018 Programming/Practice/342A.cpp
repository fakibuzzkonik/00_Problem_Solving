#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int main(){
    int i,j,t,a,b,c,n,m,k,l;
    sf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        sf("%d",&arr[i]);

    }

    sort(arr,arr+n);
    if(n%3 != 0){
        cout<<-1<<endl;
        return 0;
    }
    bool ans = false;
    m = n/3;
    for(i=0; i<n/3; i++){
        if(arr[i]<arr[i+m] && arr[i+m] < arr[i+m+m] && arr[i+m+m]%arr[i+m] == 0 && arr[i+m]%arr[i] == 0){
            ans = true;
        }else{
            cout<<-1<<endl;
            return 0;
        }
    }

    if(ans == true)
    for(i=0; i<n/3; i++){
        if(arr[i]<arr[i+m] && arr[i+m] < arr[i+m+m] && arr[i+m+m]%arr[i+m] == 0 && arr[i+m]%arr[i] == 0){
            cout<<arr[i]<<" "<<arr[i+m]<<" "<<arr[i+m+m]<<endl;
        }
    }

    return 0;
}
