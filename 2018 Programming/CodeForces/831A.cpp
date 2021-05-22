#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b,c,equ = 0,equ2 = 0,sum,middile,ans,n,m,k,temp, increaisng = 1, decresing = 1;
    cin >> n;
    if(n%2 == 0)
            middile = n/2;
    else
            middile = n/2 + 1;

    int arr[n];
    for(i=0; i<n; i++){
        cin >> a;
        arr[i] = a;
        if(i==0)
            equ = a;

        if(equ != a && i != 0)
            equ2 = 1;

    }


    for(i=0; i<middile; i++){
        if(i==0)
            temp = arr[i];

        if(temp <= arr[i])
            increaisng = 1;
        else{
            increaisng = 0;break;
        }


        temp = arr[i];
    }
    for(i=n-1; i>=middile; i--){

        if(i==n-1)
            temp = arr[i];
        //cout<<temp<<endl;
        if(temp < arr[i] && i != n-1)
            decresing = 1;
        else if (i != n-1){
            decresing = 0;break;
        }
        temp = arr[i];
    }

    if(equ2 == 0){
        cout<<"YES"<<endl;
    }
    else if(increaisng == 1 && decresing == 1){
        if(n>=4){
            if(arr[0] < arr[1] && arr[n-1] < arr[n-2]){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
