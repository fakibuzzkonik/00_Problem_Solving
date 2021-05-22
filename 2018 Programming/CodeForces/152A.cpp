#include<bits/stdc++.h>
using namespace std;
int main(){

    int i,j,t,a,b,c,d,e,f,g,n,m;
    int postion;
    string number;
    cin >> n >>m;
    int arr[n+2][m+2];
    for(i=0; i<n; i++){
        cin >> number;
        for(j=0; j<m; j++){
            arr[i][j] = number[j]-48;
        }
    }
    for(i=0; i<m; i++){
        postion = 0;
        for(j=0; j<n-1; j++){
            //cout<<arr[j][i]<< "  "<<arr[j+1][i]<< " ";
            if(arr[j][i] <= arr[j+1][i]){
                postion = j+1;
            }
        }cout<<endl;
        cout<<postion<<endl;
    }

}
