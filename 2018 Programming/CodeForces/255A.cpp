#include<bits/stdc++.h>
using namespace std;
int arr[3];
int main(){
    int i,j = 0,t,a,b,c,d,e,f,g,k,l,m,n;
    int dif1,dif2,wa = 0, wb =  0,draw = 0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        //cout<<j<<endl;
        if(j == 0){
            arr[j] += a;
            j = 1;
        }else if(j == 1){
            arr[j] += a;
            j = 2;
        }else if(j == 2){
            arr[j] += a;
            j = 0;
        }
    }
    if(arr[0] > arr[1] && arr[0] > arr[2]){
        cout<<"chest"<<endl;
    }else if(arr[1] > arr[0] && arr[1] > arr[2]){
        cout<<"biceps "<<endl;
    }else if(arr[2] > arr[1] && arr[2] > arr[0]){
        cout<<"back"<<endl;
    }
    //cout<<arr[0]<< " "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;

}
